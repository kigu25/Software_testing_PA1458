# pragma once
# include <string>

using namespace std;

class Gameobject
{
public:
	Gameobject();
	~Gameobject();

	void listinteractionTypes();
	void startinteraction(string theInteractionType);
	void listCurrentInteractionOptions(string theOptions);
	void setCurrentInteractionOptions(string theOptions);
	void startCurrentInteraction();
	void abortCurrentInteraction();

private:
	string objectName;
};
