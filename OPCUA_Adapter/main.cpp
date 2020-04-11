#define NOMINMAX
#include "websocket.h"
#include "ClientGenerator.h"



int main() {
	std::string endpoint = "opc.tcp://192.168.1.105:4840/digitaltwin/cantilever";
	ClientGenerator client(endpoint);
	std::string uri = "wss://ictgroup01.axini.com:443/adapters";
	std::string AccessToken = "eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJleHAiOjE1ODY5NDgwMDQsInN1YiI6Inh1YW55aW5nLmNoZW5nQGljdC5ubCIsImlzcyI6ImljdGdyb3VwMDEiLCJzY29wZSI6ImFkYXB0ZXIifQ.CjQ4Ggx5zy07_CX7wOlrqjG6wg4PnFZdipU4JoxZHx4";
	AxiniConnection connection(uri, AccessToken);
	std::cout << " Process closed" << std::endl;
	return 0;
}