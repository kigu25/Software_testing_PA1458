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

void Characterinterface::activate()
{
}
