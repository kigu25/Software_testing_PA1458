#include "pch.h"
#include "closeDoor.h"

closeDoor::closeDoor(string interactionName) : Interactions(interactionName)
{
    options.push_back("Slam");
    options.push_back("Gently");
}

closeDoor::~closeDoor()
{
}

bool closeDoor::execute(string option)
{
    if (option == "Slam")
    {
        cout << "You've slammed the door shut." << endl;
        return true;
    }

    if (option == "Gently")
    {
        cout << "You've gently closed the door." << endl;
        return true;
    }

    return false;
}