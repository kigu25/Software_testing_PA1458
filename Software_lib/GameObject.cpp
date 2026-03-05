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

	this->interaction_vector.push_back(new Opendoor("open"));
	this->interaction_vector.push_back(new closeDoor("close"));
}

Gameobject::~Gameobject()
{
}

string Gameobject::listinteractionTypes()
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
string Gameobject::getName() const {
	return objectName;
}