#pragma once
#include <string>
#include <iostream>
using namespace std;

class Userinterface {


public:

	Userinterface();
	~Userinterface();

	int showMainMenu();

	string userInputsString();

private:

	bool run;
	int menuChoice;

	void clearScreen();

};
