#pragma once
#include <string>
#include <iostream>

using namespace std;

class Interactions
{
public:
	Interactions(string interactionName);
	virtual ~Interactions();

	virtual string getInteraction() = 0;

private:
	string interactionName;

};
