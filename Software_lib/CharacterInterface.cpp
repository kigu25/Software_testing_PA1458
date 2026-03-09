#include "pch.h"
#include "CharacterInterface.h"

Characterinterface::Characterinterface()
{
	this->currentlyActive = nullptr;
}

Characterinterface::~Characterinterface()
{
}

void Characterinterface::create(string theCharacter)
{
	this->currentlyActive = charRepository.getCharacter(theCharacter);
}

string Characterinterface::activate()
{
	string response = this->currentlyActive->getInitialGreeting();
	return response;
}
