#include "pch.h"
#include "GameObject.h"
#include "Opendoor.h"
# include "CloseDoor.h"

#include <sstream>
#include <iostream>

Gameobject::Gameobject(const string& name)
{
	this->objectName = name;

	this->isOpen = false;

	this->interaction_vector.push_back(new Opendoor("Open"));
	this->interaction_vector.push_back(new closeDoor("Close"));
}

Gameobject::~Gameobject()
{
}

string Gameobject::listinteractionTypes() // Bör eventuellt ändra returtyp till typ <vector*> eller något för att få ett bättre test med index istället för string
{
	stringstream ss;
	for (Interactions* interaction : interaction_vector)
	{
		ss << interaction->getInteraction();
	}	
	return ss.str();

}

bool Gameobject::startinteraction(string theInteraction, string theOption)
{
	if (theInteraction == "Open")
	{
		this->isOpen = true;

		return true;
	}

	if (theInteraction == "Close")
	{
		this->isOpen = false;
		cout << theOption;

		return true;
	}

	return false;
}

void Gameobject::listCurrentInteractionOptions()
{
	for (string option : currentInteraction->getOptions())
	{
		cout << option << endl;
	}
}

void Gameobject::setCurrentInteractionOptions(string theOptions)
{
}

void Gameobject::startCurrentInteraction()
{
}

void Gameobject::abortCurrentInteraction()
{
}


bool Gameobject::getIsOpen()
{
	return this->isOpen;
}


string Gameobject::getName() const {
	return objectName;
}