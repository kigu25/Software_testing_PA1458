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

	cout << "2. Interact with object" << endl;

	cout << '\n' << "0. Exit program" << endl;

	cout << '\n' << ":";

	cin >> menuChoice;
	return menuChoice;
}

string Userinterface::userInputsString()
{
	clearScreen();
	string characterName;

	cout << "Enter the character/object name: ";

	cin >> characterName;

	return characterName;
}

string Userinterface::userInputsChoice()
{
	string Option;

	cout << '\n' << "Enter the option: ";

	cin >> Option;

	return Option;
}


void Userinterface::showMessage(string theString)
{
	cout << '\n' << theString << '\n' << endl;
}

void Userinterface::waitForEnter()
{
	cout << "Press enter to continue...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}


void Userinterface::clearScreen()
{
	cout << "\033[3J\033[H\033[2J";
}