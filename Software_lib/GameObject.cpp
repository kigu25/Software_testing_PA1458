#include "GameObject.h"
#include <sstream>
#include <iostream>

Gameobject::Gameobject(const string& name)
{
	this->objectName = name;
	this->interaction_vector.push_back("Open");
}

Gameobject::~Gameobject()
{
}

string Gameobject::listinteractionTypes()
{
	stringstream ss;
	for (string interaction : interaction_vector)
	{
		ss << interaction;
	}	
	return ss.str();

}

void Gameobject::startinteraction(string theInteractionType)
{
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