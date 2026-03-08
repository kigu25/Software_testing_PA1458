#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Interactions
{
public:
	Interactions(string interactionName);
	virtual ~Interactions();

	string getInteraction();
	vector<string> getOptions();

	virtual bool execute(string option) = 0;
private:
	string interactionName;
	vector<string>options;
};
