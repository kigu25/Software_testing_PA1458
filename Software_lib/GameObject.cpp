#include "GameObject.h"
#include <sstream>
#include <iostream>

Gameobject::Gameobject()
{
	this->objectName = "";
	this->interactionList.push_back("test");
}

Gameobject::~Gameobject()
{
}

string Gameobject::listinteractionTypes()
{
	stringstream ss;
	for (int i = 0; i < interactionList.size(); i++)
	{
		cout << this->interactionList[i];
	}
	return ss;
}

void Gameobject::startinteraction(string theInteractionType)
{
}

void Gameobject::listCurrentInteractionOptions(string theOptions)
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
