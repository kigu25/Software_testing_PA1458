#pragma once
#include <string>
#include <iostream>

#include "Interactions.h"

using namespace std;

class closeDoor : public Interactions
{
public:
	closeDoor(string interactionName);
	~closeDoor();

	string getInteraction();
	string slamDoorShut();
	string gentlyCloseDoor();

private:

	string interaction;
};
