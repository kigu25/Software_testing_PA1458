#pragma once
#include <string>
#include <iostream>

using namespace std;

class Interactions
{
public:
	Interactions(string interactionName);
	virtual ~Interactions();

	string getInteraction();

private:
	string interactionName;

};
