# pragma once
# include <string>
#include <vector>
# include "Interactions.h"

using namespace std;

class Gameobject {

public:
	Gameobject(const string& name);
	~Gameobject();

	string listinteractionTypes();

	bool startinteraction(string theInteraction, string theOption);
	void listCurrentInteractionOptions();

	void setCurrentInteractionOptions(string theOptions);
	void startCurrentInteraction();
	void abortCurrentInteraction();

	bool getIsOpen();
	string getName() const;
private:
	string objectName;

	bool isOpen;
	
	vector<Interactions*> interaction_vector;

	Interactions* currentInteraction;
	string currentOption;
};
