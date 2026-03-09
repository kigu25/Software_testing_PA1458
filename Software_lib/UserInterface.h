#pragma once
#include <string>
#include <iostream>
#include <limits>
using namespace std;

class Userinterface {


public:

	Userinterface();
	~Userinterface();

	int showMainMenu();

	string userInputsString();

	string userInputsChoice();

	void showMessage(string theString);

	void waitForEnter();

private:

	int menuChoice;

	void clearScreen();

};
