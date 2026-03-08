#pragma once
#include <string>

using namespace std;

class InteractionEngine {
private:

public:
	InteractionEngine();
	~InteractionEngine();
	
	string parseQuery(string theQuery);
	string formatResponse(string theResponse, string nextConversationOptions);
};