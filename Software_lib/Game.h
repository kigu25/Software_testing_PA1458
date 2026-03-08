#pragma once
#include <string>
#include "Scene.h"
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
	void Game::initiateConversation(string theCharacter);

	string getCurrentOption();

	Gameobject* getCurrentObj();

private:

	Scene scene1;
	Gameobject* currentObj;
	string currentInteraction;
	string currentOption;
	PhoneBook phonebook;
};