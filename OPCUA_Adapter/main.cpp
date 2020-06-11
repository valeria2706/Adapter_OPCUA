#define NOMINMAX
#include "websocket.h"
#include "ClientGenerator.h"



int main() {
	std::string uri = "wss://ictgroup01.axini.com:443/adapters";
	std::string AccessToken = "eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJleHAiOjE1OTIzMDAwNzksInN1YiI6Inh1YW55aW5nLmNoZW5nQGljdC5ubCIsImlzcyI6ImljdGdyb3VwMDEiLCJzY29wZSI6ImFkYXB0ZXIifQ.EZ9umEepnKYL4Ad1zqzOHBjV7nHYlHXEbBXW0lO6_IA";
	AxiniConnection connection(uri, AccessToken);
	std::cout << " Process closed" << std::endl;
	return 0;
}