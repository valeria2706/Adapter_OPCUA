#pragma once
#include <opc/ua/client/client.h>
#include <opc/ua/node.h>
#include <opc/ua/subscription.h>

#include <opc/common/logger.h>

#include <iostream>
#include <stdexcept>
#include <thread>

using namespace OpcUa;

/**
	ClientGenerator
	ClientGenerator.cpp
	Purpose: Creates an instance of the OPC UA client.
	@author Xuanying Cheng
	@version 1.0 08-04-2020
*/

class ClientGenerator {
public:
	std::unique_ptr<UaClient> client_root;
	ClientGenerator();
	ClientGenerator(std::string endpoint);
	~ClientGenerator();

	int ReadValue(const std::string&);
	void WriteValue(const std::string&, const Variant&);
};



