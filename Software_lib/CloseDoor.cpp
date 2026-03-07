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

string closeDoor::slamDoorShut()
{
    this->interaction = "You've slammed the door shut.";
    return this->interaction;
}

string closeDoor::gentlyCloseDoor()
{
    this->interaction = "You've gently closed the door.";
    return this->interaction;
}