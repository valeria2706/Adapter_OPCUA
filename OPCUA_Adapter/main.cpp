#define NOMINMAX
#include "websocket.h"
#include "ClientGenerator.h"



int main() {
	std::string uri = "wss://ictgroup01.axini.com:443/adapters";
	std::string AccessToken = "eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJleHAiOjE2MDA1MjY4ODUsInN1YiI6Inh1YW55aW5nLmNoZW5nQGljdC5ubCIsImlzcyI6ImljdGdyb3VwMDEiLCJzY29wZSI6ImFkYXB0ZXIifQ.4d939996A1e8Ohy7v5imiIRlGTrnCarVkyldwEfTZ6o";
	AxiniConnection connection(uri, AccessToken);
	std::cout << "Process closed" << std::endl;
	return 0;
}