#include"ServerGenerator.h"
using namespace OpcUa;

#include "ServerGenerator.h"

using namespace OpcUa;

ServerGenerator::ServerGenerator(std::string endpoint) {
	auto logger = spdlog::stderr_color_mt("server");
	server_root = std::make_unique<UaServer>(logger);
	server_root->SetEndpoint(endpoint);
	server_root->SetServerURI("urn://exampleserver.freeopcua.github.io");
	server_root->Start();
	//then register our server namespace and get its index in server
	idx = server_root->RegisterNamespace("http://examples.freeopcua.github.io");

	//Create our address space using different methods
	objects = server_root->GetObjectsNode();
	Node warehouse_horizontal = createObject("WarehouseHorizontal", idx, objects);
	//Add a variable and a property with auto-generated nodeid to our custom object
	createVariable(warehouse_horizontal, "cantilever_x_state", idx);
	createVariable(warehouse_horizontal, "cantilever_x_continuous", idx);
	createVariable(warehouse_horizontal, "cantilever_x_position", idx);
	createVariable(warehouse_horizontal, "cantilever_x_eclapsedTime", idx);
	createVariable(warehouse_horizontal, "cantilever_x_targetSteps", idx);
	createVariable(warehouse_horizontal, "cantilever_x_PreferredVelocity", idx, 150);


	Node warehouse_vertical = createObject("WarehouseVertical", idx, objects);
	//Add a variable and a property with auto-generated nodeid to our custom object
	createVariable(warehouse_vertical, "cantilever_y_state", idx);
	createVariable(warehouse_vertical, "cantilever_y_continuous", idx);
	createVariable(warehouse_vertical, "cantilever_y_position", idx);
	createVariable(warehouse_vertical, "cantilever_y_eclapsedTime", idx);
	createVariable(warehouse_vertical, "cantilever_y_targetSteps", idx);
	createVariable(warehouse_vertical, "cantilever_y_PreferredVelocity", idx, 150);


	Node warehouse_fetch = createObject("WarehouseFetch", idx, objects);
	//Add a variable and a property with auto-generated nodeid to our custom object
	createVariable(warehouse_fetch, "cantilever_z_state", idx);
	createVariable(warehouse_fetch, "cantilever_z_continuous", idx);
	createVariable(warehouse_fetch, "cantilever_z_position", idx);
	createVariable(warehouse_fetch, "cantilever_z_eclapsedTime", idx);
	createVariable(warehouse_fetch, "cantilever_z_targetSteps", idx);
	createVariable(warehouse_fetch, "cantilever_z_PreferredVelocity", idx);

	Node robot_horizontal = createObject("RobotHorizontal", idx, objects);
	//Add a variable and a property with auto-generated nodeid to our custom object
	createVariable(robot_horizontal, "distributor_x_state", idx);
	createVariable(robot_horizontal, "distributor_x_continuous", idx);
	createVariable(robot_horizontal, "distributor_x_position", idx);
	createVariable(robot_horizontal, "distributor_x_eclapsedTime", idx);
	createVariable(robot_horizontal, "distributor_x_targetSteps", idx);
	createVariable(robot_horizontal, "distributor_x_PreferredVelocity", idx);

	Node robot_vertical = createObject("RobotVertical", idx, objects);
	//Add a variable and a property with auto-generated nodeid to our custom object
	createVariable(robot_vertical, "distributor_y_state", idx);
	createVariable(robot_vertical, "distributor_y_continuous", idx);
	createVariable(robot_vertical, "distributor_y_position", idx);
	createVariable(robot_vertical, "distributor_y_eclapsedTime", idx);
	createVariable(robot_vertical, "distributor_y_targetSteps", idx);
	createVariable(robot_vertical, "distributor_y_PreferredVelocity", idx);

	Node robot_rotation = createObject("RobotRotation", idx, objects);
	//Add a variable and a property with auto-generated nodeid to our custom object
	createVariable(robot_rotation, "distributor_r_state", idx);
	createVariable(robot_rotation, "distributor_r_continuous", idx);
	createVariable(robot_rotation, "distributor_r_position", idx);
	createVariable(robot_rotation, "distributor_r_eclapsedTime", idx);
	createVariable(robot_rotation, "distributor_r_targetSteps", idx);
	createVariable(robot_rotation, "distributor_r_PreferredVelocity", idx);
	std::cout << "server is built" << std::endl;
}

Node ServerGenerator::createObject(std::string name, uint32_t idx, Node objects) {

	NodeId nid(99 + count++, idx);
	QualifiedName qn(name, idx);
	return objects.AddObject(nid, qn);
}

void ServerGenerator::createVariable(Node object_node, std::string variable_name, uint32_t idx) {
	Node new_node = object_node.AddVariable(idx, variable_name, Variant(0));
}
void ServerGenerator::createVariable(Node object_node, std::string variable_name, uint32_t idx, float init) {
	Node new_node = object_node.AddVariable(idx, variable_name, Variant(init));
}

void ServerGenerator::serverWrite(std::string nodeid, int value) {
	Node write = server_root->GetNode(nodeid);
	write.SetValue(value);

}

void ServerGenerator::serverStop() {
	server_root->Stop();
}