#include "pch.h"
#include "UserInterface.h"

Userinterface::Userinterface()
{
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

	cout << ": ";

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

void Userinterface::showMessage(string theString)
{
	cout << theString << endl;
	cout << "\n" << "Press enter to continue...";
	cin.ignore(1000, '\n');
	cin.get();
}



void Userinterface::clearScreen()
{

	cout << "\033[3J\033[H\033[2J";
}
