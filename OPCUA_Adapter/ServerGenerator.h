#pragma once
#include <iostream>
#include <algorithm>
#include <time.h>

#include <thread>
#include <chrono>

#include <opc/ua/node.h>
#include <opc/ua/subscription.h>
#include <opc/ua/server/server.h>

using namespace OpcUa;

class ServerGenerator {

	std::unique_ptr<UaServer> server_root;
	uint32_t idx;
	Node objects;
	int count = 0;

	Node createObject(std::string name, uint32_t idx, Node objects);
public:
	ServerGenerator(std::string endpoint);
	void createVariable(Node object_node, std::string variable_name, uint32_t idx);
	void createVariable(Node object_node, std::string variable_name, uint32_t idx, float init);
	void serverStop();
	void serverWrite(std::string nodeid, int value);
};