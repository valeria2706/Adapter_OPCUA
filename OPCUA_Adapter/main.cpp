#define NOMINMAX
#include "websocket.h"
#include "ClientGenerator.h"



int main() {
	std::string uri = "wss://ictgroup01.axini.com:443/adapters";
	std::string AccessToken = "eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJleHAiOjE1ODc1NDUwOTcsInN1YiI6Inh1YW55aW5nLmNoZW5nQGljdC5ubCIsImlzcyI6ImljdGdyb3VwMDEiLCJzY29wZSI6ImFkYXB0ZXIifQ.xOWK6sYJtn8Ip01C_KkU63HeiYtHIQLyYGIOkdN2glc";
	AxiniConnection connection(uri, AccessToken);
	std::cout << " Process closed" << std::endl;
	return 0;
}