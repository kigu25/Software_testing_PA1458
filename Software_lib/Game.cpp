#include "pch.h"

#include "Game.h"


Game::Game() {
	this->currentObj = nullptr;

}


Game::~Game() {

}


void Game::selectGameObject(string name) {

	currentObj = scene1.getTheObject(name);

	cout << currentObj->listinteractionTypes();
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


Gameobject* Game::getCurrentObj()
{
	return currentObj;
}
