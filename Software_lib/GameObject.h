# pragma once
# include <string>
#include <vector>
# include "Interactions.h"

using namespace std;

class Gameobject {

public:

	Gameobject();
	~Gameobject();

	string listinteractionTypes();
	void startinteraction(string theInteractionType);
	void listCurrentInteractionOptions();
	void setCurrentInteractionOptions(string theOptions);
	void startCurrentInteraction();
	void abortCurrentInteraction();
	string getName() const;
private:
	string objectName;
	vector<string> interaction_vector;
	
};
