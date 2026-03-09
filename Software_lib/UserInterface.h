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

	string userInputsChoice();

	void showMessage(string theString);

private:

	int menuChoice;

	void clearScreen();

};
