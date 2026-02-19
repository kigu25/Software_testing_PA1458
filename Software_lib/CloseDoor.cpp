#include "pch.h"
#include "closeDoor.h"

closeDoor::closeDoor(string interactionName) : Interactions(interactionName)
{
    this->interaction = "The door is closed.";
}

closeDoor::~closeDoor()
{
}

string closeDoor::getInteraction()
{
    return this->interaction;
}
