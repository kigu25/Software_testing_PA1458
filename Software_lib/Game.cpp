#include "Game.h"

Game::Game() {
	this->currentObj = nullptr;
}
Game::~Game() {

	delete currentObj;
}
void Game::selectGameObject(string name) {

	currentObj = scene1.getTheObject(name);
}
void Game::selectInteraction(string theInteraction) {

	
}
void Game::setInteractionOptions(string theOptions) {

}
void Game::startInteraction() {

}
void Game::abortInteraction() {

}