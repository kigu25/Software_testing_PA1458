# pragma once
# include <string>
#include <list>

using namespace std;

class Gameobject {

public:

	Gameobject();
	~Gameobject();

	string listinteractionTypes();
	void startinteraction(string theInteractionType);
	void listCurrentInteractionOptions(string theOptions);
	void setCurrentInteractionOptions(string theOptions);
	void startCurrentInteraction();
	void abortCurrentInteraction();

private:
	string objectName;
	list<string> interactionList;
	
};
