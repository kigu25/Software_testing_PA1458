#include "pch.h"
#include "Opendoor.h"

Opendoor::Opendoor(string interactionName) : Interactions(interactionName)
{
    options.push_back("Break");
    options.push_back("Lockpick");
}

Opendoor::~Opendoor()
{
}

bool Opendoor::execute(string option)
{
    if (option == "Break")
    {
        cout << "You've broken open the door." << endl;
        return true;
    }

    if (option == "Lockpick")
    {
        cout << "You've lockpicked the door." << endl;
        return true;
    }

    return false;
}