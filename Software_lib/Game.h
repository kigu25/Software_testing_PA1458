#pragma once
#include <string>
#include "Scene.h"
#include "PhoneBook.h"
using namespace std;

class Game
{
public:
	Game();
	~Game();

	void selectGameObject(string name);
	void selectInteraction(string theInteraction);
	void setInteractionOption(string theOption);
	void startInteraction(Gameobject* theObject, string theInteraction, string theOption);
	void abortInteraction();
	void initiateConversation(string theCharacter);

	string getCurrentOption();

	Gameobject* getCurrentObj();

private:

	Scene scene1;
	Scene Inventory;
	Gameobject* currentObj;
	string currentInteraction;
	string currentOption;
	PhoneBook phonebook;
};