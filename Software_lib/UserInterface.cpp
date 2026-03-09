#include "pch.h"
#include "UserInterface.h"

Userinterface::Userinterface()
{
	this->run = true;
	this->menuChoice = -1;
}

Userinterface::~Userinterface()
{
}


int Userinterface::showMainMenu()
{	
	// ALl menuchoice put here.
	clearScreen();

	cout << "What do you want to do?" << endl;

	cout << "1. Initate conversation with character" << endl;

	cout << "0. Exit program" << endl;

	cout << ":";

	cin >> menuChoice;
	return menuChoice;
}

string Userinterface::userInputsString()
{
	clearScreen();
	string characterName;

	cout << "Enter the character's name: ";

	cin >> characterName;

	return characterName;
}



void Userinterface::clearScreen()
{

	cout << "\033[3J\033[H\033[2J";
}
