#pragma once
#include <string>
#include <iostream>

#include "Interactions.h"

using namespace std;

class Opendoor : public Interactions
{
public:
	Opendoor(string interactionName);
	~Opendoor();

	bool execute(string option) override;
};
