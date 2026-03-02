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

string Opendoor::breakOpenDoor()
{
    this->interaction = "You've broken open the door.";
    return this->interaction;
}

string Opendoor::lockpickDoor()
{
    this->interaction = "You've lockpicked the door.";
    return this->interaction;
}
