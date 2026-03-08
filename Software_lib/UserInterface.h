#pragma once
#include <string>
#include <iostream>
using namespace std;

class Userinterface {


public:

	Userinterface();
	~Userinterface();

	void start();
	void interFaceLoop();

private:

	bool run;
	int menuChoice;

	void showMainMenu();

	void menuChoiceHandler(int menuChoice);


	void clearScreen();

};
