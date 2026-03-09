#include "pch.h"
#include "InteractionEngine.h"

InteractionEngine::InteractionEngine() {

};

InteractionEngine::~InteractionEngine()
{

};


string InteractionEngine::parseQuery(string theQuery) {
	if (theQuery == "hello" || theQuery == "hi")
		return "greetings";

	if (theQuery == "goodbye" || theQuery == "bye")
		return "farewell";

	if (theQuery == "help")
		return "I will help you!";

	return "unknown";
};
string InteractionEngine::formatResponse(string theResponse, string nextConversationOptions) {
	string formatted;

	formatted += "NPC: ";
	formatted += theResponse;
	formatted += "\n";

	if (nextConversationOptions != "")
	{
		formatted += "\nOptions:\n";
		formatted += nextConversationOptions;
	}

	return formatted;
};