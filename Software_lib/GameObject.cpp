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
	for (auto interaction : interaction_vector)
	{
		if (interaction->getInteraction() == theInteraction)
		{
			return interaction->execute(theOption);
		}
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
	currentOption = theOptions;
}

void Gameobject::startCurrentInteraction()
{
	currentInteraction->execute(currentOption);
}

void Gameobject::abortCurrentInteraction()
{
	currentInteraction = nullptr;
	currentOption = "";
}


bool Gameobject::getIsOpen()
{
	return this->isOpen;
}


string Gameobject::getName() const {
	return objectName;
}