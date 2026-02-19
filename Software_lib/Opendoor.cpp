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
    this->interaction = "You've breaked opened the door.";
    return this->interaction;
}

string Opendoor::gentlyOpenDoor()
{
    this->interaction = "You've gently opened the door.";
    return this->interaction;
}
