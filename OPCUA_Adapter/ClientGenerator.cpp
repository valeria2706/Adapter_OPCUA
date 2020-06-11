#include "ClientGenerator.h"

using namespace OpcUa;

ClientGenerator::ClientGenerator() {};

ClientGenerator::ClientGenerator(std::string endpoint) {
	auto logger = spdlog::stderr_color_mt("client");
	client_root = std::make_unique<UaClient>(logger);
	logger->info("Connecting to: {}", endpoint);
	client_root->Connect(endpoint);
	std::cout << "Client is connected" << std::endl;

}


int ClientGenerator::ReadValue(const std::string& nodenumber) {
	auto result = client_root->GetNode(nodenumber);//"ns=2;i=2006;"
	int new_value = result.GetValue().As<int>();

	return new_value;
}

void ClientGenerator::WriteValue(const std::string& nodenumber, const Variant& value) {
	auto write = client_root->GetNode(nodenumber);//"ns=2;i=2001;"

	write.SetValue(value);


}

