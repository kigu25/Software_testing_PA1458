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
	this->currentInteraction = nullptr;

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
		ss << interaction->getInteraction() << '\n';
	}	
	return ss.str();

}

bool Gameobject::startinteraction(string theInteraction, string theOption)
{
	for (auto interaction : interaction_vector)
	{
		if (interaction->getInteraction() == theInteraction)
		{
			if (theInteraction == "Open")
			{
				this->isOpen = true;
			}
			if (theInteraction == "Close")
			{
				this->isOpen = false;
			}
			return interaction->execute(theOption);
		}
	}

	return false;
}

string Gameobject::listCurrentInteractionOptions(string theInteraction) {

	stringstream ss;

	for (Interactions* interaction : interaction_vector)
	{
		if (interaction->getInteraction() == theInteraction)
		{
			for (string option : interaction->getOptions())
			{
				ss << option << '\n';
			}
			return ss.str();
		}
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