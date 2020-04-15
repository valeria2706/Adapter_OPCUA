#include "ClientGenerator.h"

using namespace OpcUa;

ClientGenerator::ClientGenerator() {};

ClientGenerator::ClientGenerator(std::string endpoint) {
	auto logger = spdlog::stderr_color_mt("client");
	client_root = std::make_unique<UaClient>(logger);

	try
	{
		logger->info("Connecting to: {}", endpoint);
		client_root->Connect(endpoint);
		std::cout << "Client is connected" << std::endl;
	}
	catch (const std::exception & exc)
	{
		logger->error("Error: {}", exc.what());
	}
	catch (...)
	{
		logger->error("Unknown error.");
	}

}


ClientGenerator::~ClientGenerator() {
	client_root->Disconnect();
	delete(client_root.get());
}

int ClientGenerator::ReadValue(const std::string& nodenumber) {
	auto result = client_root->GetNode(nodenumber);//"ns=2;i=2006;"
	int new_value = result.GetValue().As<int>();

	std::cout << "the value read is " << new_value << std::endl;
	return new_value;
}

void ClientGenerator::WriteValue(const std::string& nodenumber, const Variant& value) {
	auto write = client_root->GetNode(nodenumber);//"ns=2;i=2001;"

	write.SetValue(value);


}
