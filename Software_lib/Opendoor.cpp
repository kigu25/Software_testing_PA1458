#include "pch.h"
#include "Opendoor.h"

Opendoor::Opendoor(string interactionName, string interactionString) : Interactions(interactionName)
{
    this->interactionString = interactionString;
}

Opendoor::~Opendoor()
{
}

string Opendoor::getInteractionString()
{
    return this->interactionString;
}
