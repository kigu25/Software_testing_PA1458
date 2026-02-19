#include "pch.h"
#include "Opendoor.h"

Opendoor::Opendoor(string interactionName) : Interactions(interactionName)
{
    this->interaction = "The door is open.";
}

Opendoor::~Opendoor()
{
}

string Opendoor::getInteraction()
{
    return this->interaction;
}
