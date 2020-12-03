#ifndef Axiniconnection_H
#define Axiniconnection_H
#define NOMINMAX
#include <websocketpp/config/asio_client.hpp>
#include <websocketpp/client.hpp>
#include "announcement.pb.h"
#include "announcements.pb.h"
#include "configuration.pb.h"
#include "message.pb.h"
#include "label.pb.h"
#include "ServerGenerator.h"
#include <iostream>




typedef websocketpp::client<websocketpp::config::asio_tls_client> client;
typedef std::shared_ptr<boost::asio::ssl::context> context_ptr;
typedef client::connection_ptr connection_ptr;
using websocketpp::lib::placeholders::_1;
using websocketpp::lib::placeholders::_2;
using websocketpp::lib::bind;
// pull out the type of messages sent by our config
typedef websocketpp::config::asio_client::message_type::ptr message_ptr;
typedef PluginAdapter::Api::Message AMSMessage;
typedef PluginAdapter::Api::Label AMSLabel;
typedef PluginAdapter::Api::Announcement AMSAnnouncement;
typedef PluginAdapter::Api::Message_Ready AMSReady;
typedef PluginAdapter::Api::Label_Parameter AMSLabelParameter;
typedef PluginAdapter::Api::Label_LabelType AMSLabeltype;
typedef PluginAdapter::Api::Label_Parameter_Value AMSLabelParameterValue;


class AxiniConnection {
public:
	AxiniConnection(std::string uri, std::string AceessToken);
	void on_open(websocketpp::connection_hdl hdl);
	void on_message(websocketpp::connection_hdl hdl, message_ptr msg);
	// Send a response to the AMS after processing stimilus
	// Send a label message to the AMS after processing stimilus
	void sendStimulus(AMSMessage message, websocketpp::connection_hdl hdl);
	void announce(std::string label_name, AMSAnnouncement* announcement, std::string parameter_name, std::string parameter_type, AMSLabeltype type, std::string channel);
	void announce(std::string label_name, AMSAnnouncement* announcement, AMSLabeltype type, std::string channel);
	void sendResponse(std::string labelname, websocketpp::connection_hdl hdl, float currentvalue, std::string parameter_name, std::string parameter_type, std::string channel);
	void sendResponse(std::string labelname, websocketpp::connection_hdl hdl, std::string channel);
	std::string prev_msg = "home2";
	
private:
	client c;
	//ServerGenerator* client= new ServerGenerator("opc.tcp://192.168.7.2:4840/digitaltwin/cantilever");
	ServerGenerator* server = new ServerGenerator("opc.tcp://127.0.0.1:4841/freeopcua/server");
	//ServerGenerator* client2 = new ServerGenerator("opc.tcp://192.168.1.105:4840/digitaltwin/cantilever");
	static context_ptr on_tls_init();
	std::string s1 = "2storage1";
	std::string s2 = "2storage2";
	std::string s3 = "2storage3";
	std::string s4 = "2max";
	std::string s5 = "2home";
};
#endif
