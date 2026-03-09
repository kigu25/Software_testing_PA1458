#include "pch.h"
#include "Game.h"


Game::Game() {
	this->currentObj = nullptr;
	this->currentInteraction = "";
	this->currentOption = "";
	this->running = true;

	Inventory.addToInventory(new Gameobject("Radio"));
}


Game::~Game() {

}


void Game::selectGameObject(string name) {

	currentObj = scene1.getTheObject(name);
	if (currentObj != nullptr) {
		cout << currentObj->listinteractionTypes();
	}
}


void Game::selectInteraction(string theInteraction) {
	
	this->currentInteraction = theInteraction;

}


void Game::setInteractionOption(string theOption) {

	this->currentOption = theOption;

}


void Game::startInteraction(Gameobject* theObject, string theInteraction, string theOption) {

	scene1.doTheInteraction(theObject, theInteraction, theOption);
}


void Game::abortInteraction() {

}

void Game::initiateConversation(string theCharacter) {
	if (!scene1.isAvailable(theCharacter)) {
		cout << "Character is not available!" << endl;
		return;
	}

	string contact = phonebook.getContactMethod(theCharacter);
	if (contact.empty()) {
		return;
	}
}

string Game::getCurrentOption()
{
	return this->currentOption;
}


Gameobject* Game::getCurrentObj()
{
	return currentObj;
}

void Game::run()
{
	while (running)
	{
		int choice = ui.showMainMenu();

		if (choice == 0)
		{
			this->running = false;
		}

		else {
			handleChoice(choice);
		}
	}
}

void Game::handleChoice(int choice)
{
	switch (choice)
	{
	case 0:
		this->running = false;
		break;

	case 1:
	{
		string characterChoice = ui.userInputsString();
		initiateConversation(characterChoice);
		break;
	}

	case 2:

		break;



	}
}
