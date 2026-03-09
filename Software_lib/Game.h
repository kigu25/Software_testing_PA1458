#pragma once
#include <string>
#include "Scene.h"
#include "PhoneBook.h"
#include "UserInterface.h"
#include "CharacterInterface.h"

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

	void run();

private:

	Scene scene1;
	Scene Inventory;
	Gameobject* currentObj;
	PhoneBook phonebook;
	Userinterface ui;
	Characterinterface CharInterface;


	string currentInteraction;
	string currentOption;
	
	
	bool running;

	void handleChoice(int choice);
};