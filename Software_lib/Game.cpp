#include "Game.h"

Game::Game() {
	this->scene1;
	this->currentObj = nullptr;
}
Game::~Game() {

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