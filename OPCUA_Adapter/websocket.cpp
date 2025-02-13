#include "websocket.h"


void AxiniConnection::announce(std::string label_name, AMSAnnouncement* announcement, std::string parameter_name, AMSLabeltype type, std::string channel) {
	AMSLabel* label = new AMSLabel();
	label = announcement->add_labels();
	label->set_label(label_name);
	label->set_type(type);
	label->set_channel(channel);
	if (!parameter_name.empty()) {
		AMSLabelParameter* parameter = new AMSLabelParameter();
		AMSLabelParameterValue* value = new AMSLabelParameterValue();
		parameter = label->add_parameters();
		value->set_integer(0);
		parameter->set_allocated_value(value);
		parameter->set_name(parameter_name);
	}
}


void AxiniConnection::sendResponse(std::string labelname, websocketpp::connection_hdl hdl, int currentvalue, std::string parameter_name, std::string channel) {
	AMSLabel* label = new AMSLabel();
	label->set_label(labelname);
	label->set_type(AMSLabeltype::Label_LabelType_RESPONSE);
	label->set_channel(channel);
	if (!parameter_name.empty()) {
		AMSLabelParameter* parameter = new AMSLabelParameter();
		AMSLabelParameterValue* value = new AMSLabelParameterValue();
		parameter = label->add_parameters();
		value->set_integer(currentvalue);
		parameter->set_allocated_value(value);
		parameter->set_name(parameter_name);
	}
	AMSMessage message;
	std::ostringstream labelstream;
	std::string msg;
	message.set_allocated_label(label);
	message.SerializeToOstream(&labelstream);
	msg = labelstream.str();
	c.send(hdl, msg, websocketpp::frame::opcode::BINARY);
}



void AxiniConnection::sendStimulus(AMSMessage message, websocketpp::connection_hdl hdl) {
	std::ostringstream labelstream;
	std::string msg;
	message.SerializeToOstream(&labelstream);
	msg = labelstream.str();
	c.send(hdl, msg, websocketpp::frame::opcode::BINARY);
}

void AxiniConnection::on_open(websocketpp::connection_hdl hdl) {
	std::cout << "Opening socket connection with AMS ... " << std::endl;

	std::string msg;
	std::ostringstream stream;
	// create announcement
	AMSAnnouncement* announcement = new AMSAnnouncement();
	announcement->set_name("xuanying@ICT");
	// add labels to the announcement 

	announce("go_x", announcement, "", AMSLabeltype::Label_LabelType_STIMULUS, "warehouse");
	announce("go_y", announcement, "", AMSLabeltype::Label_LabelType_STIMULUS, "warehouse");
	announce("go_z", announcement, "", AMSLabeltype::Label_LabelType_STIMULUS, "warehouse");
	announce("go_conveyor", announcement, "", AMSLabeltype::Label_LabelType_STIMULUS, "warehouse");
	announce("forward", announcement, "", AMSLabeltype::Label_LabelType_STIMULUS, "warehouse");
	announce("backward", announcement, "", AMSLabeltype::Label_LabelType_STIMULUS, "warehouse");
	announce("read_encoder", announcement, "", AMSLabeltype::Label_LabelType_STIMULUS, "warehouse");
	announce("stop", announcement, "", AMSLabeltype::Label_LabelType_STIMULUS, "warehouse");
	//announce("read_gpio", announcement, "", AMSLabeltype::Label_LabelType_STIMULUS, "warehouse");


	announce("encoder_val", announcement, "_encoder", AMSLabeltype::Label_LabelType_RESPONSE, "warehouse");
	announce("wait_for_3s", announcement, "", AMSLabeltype::Label_LabelType_RESPONSE, "warehouse");
	announce("positioned", announcement, "", AMSLabeltype::Label_LabelType_RESPONSE, "warehouse");
	//announce("gpio_val", announcement, "_gpio", AMSLabeltype::Label_LabelType_RESPONSE, "warehouse");
	// sending the announcement
	AMSMessage message;
	message.set_allocated_announcement(announcement);
	message.SerializeToOstream(&stream);
	msg = stream.str();
	std::cout << "Sending announcement message to AMS." << std::endl;
	c.send(hdl, msg, websocketpp::frame::opcode::BINARY);
	std::cout << "Socket connection with AMS succesfully opened." << std::endl;

}
context_ptr AxiniConnection::on_tls_init() {
	// establishes a SSL connection
	context_ptr ctx = std::make_shared<boost::asio::ssl::context>(boost::asio::ssl::context::sslv23);
	try {
		ctx->set_options(boost::asio::ssl::context::default_workarounds |
			boost::asio::ssl::context::no_sslv2 |
			boost::asio::ssl::context::no_sslv3 |
			boost::asio::ssl::context::single_dh_use);
	}
	catch (std::exception & e) {
		std::cout << "Error in context pointer: " << e.what() << std::endl;
	}
	return ctx;
}
void AxiniConnection::on_message(websocketpp::connection_hdl hdl, message_ptr msg) {
	AMSMessage message;
	std::string stringmessage;
	//std::istringstream stream??
	std::string stringmsg = msg->get_payload();
	if (!message.ParseFromString(stringmsg)) {
		std::cerr << "Failed to parse message." << std::endl;
	}

	if (message.has_configuration()) {
		std::cout << "Received configuration. Preparing ready message." << std::endl;
		AMSMessage* readyMessage = new AMSMessage();
		AMSReady* ready = new AMSReady();
		std::ostringstream readystream;
		readyMessage->set_allocated_ready(ready);
		readyMessage->SerializeToOstream(&readystream);
		stringmessage = readystream.str();
		c.send(hdl, stringmessage, websocketpp::frame::opcode::BINARY);
		std::cout << "Sent ready msg." << std::endl;
	}
	if (message.has_label()) {
		sendStimulus(message, hdl);
		std::cout << "Received Stimulus: " << message.label().label() << std::endl;
		std::string stimulus = message.label().label();
		if (stimulus == "forward") {
			client->WriteValue("ns=2;i=2001;", 1);
		}

		else if (stimulus == "stop") {
			client->WriteValue("ns=2;i=2001;", 0);
		}
		else if(stimulus == "read_encoder"){
			int readvalue = client->ReadValue("ns=2;i=2006;");
			sendResponse("encoder_val", hdl, readvalue, "_encoder", "warehouse");
		}
		


	}
	if (message.has_reset()) {
		AMSMessage* readyMessage = new AMSMessage();
		AMSReady* ready = new AMSReady();
		std::ostringstream readystream;
		readyMessage->set_allocated_ready(ready);
		readyMessage->SerializeToOstream(&readystream);
		stringmessage = readystream.str();
		c.send(hdl, stringmessage, websocketpp::frame::opcode::BINARY);
		std::cout << "Reset received" << std::endl;
	}
}
AxiniConnection::AxiniConnection(std::string uri, std::string AccessToken) {
	try {
		// Set logging to be pretty verbose (everything except message payloads)
		c.set_access_channels(websocketpp::log::alevel::all);
		c.clear_access_channels(websocketpp::log::alevel::frame_payload);
		// Initialize ASIO
		c.init_asio();
		c.set_tls_init_handler(bind(&on_tls_init));
		// Register our message handler
		c.set_open_handler(bind(&AxiniConnection::on_open, this, ::_1));
		c.set_message_handler(bind(&AxiniConnection::on_message, this, ::_1, ::_2));
		websocketpp::lib::error_code ec;
		connection_ptr con = c.get_connection(uri, ec);
		if (ec) {
			std::cout << "could not create connection because: " << ec.message() << std::endl;
		}
		con->append_header("Authentication", AccessToken);
		// Note that connect here only requests a connection. No network messages are
		// exchanged until the event loop starts running in the next line.
		c.connect(con);
		std::cout << "Connected with axini" << std::endl;
		// Start the ASIO io_service run loop
		// this will cause a single connection to be made to the server. c.run()
		// will exit when this connection is closed.
		c.run();
		std::cout << "Connection closed " << std::endl;
	}
	catch (websocketpp::exception const& e) {
		std::cout << e.what() << std::endl;
	}
}