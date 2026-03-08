#include "UserInterface.h"

Userinterface::Userinterface()
{
	this->run = true;
	this->menuChoice = -1;
}

Userinterface::~Userinterface()
{
}


//This will be called form main to start
void Userinterface::start()
{

	interFaceLoop();
}


//The loop itself
void Userinterface::interFaceLoop()
{
	while (run = true)
	{
		clearScreen();

		showMainMenu();
		cout << '\n' << "What do you want to do? : ";
		cin >> this->menuChoice;

		menuChoiceHandler(menuChoice);

	}
}

void Userinterface::showMainMenu()
{

	// ALl menuchoice put here.



	cout << "0. Exit program" << endl;
}


// Handle user-choices
void Userinterface::menuChoiceHandler(int menuChoice)
{
	switch (menuChoice)
	{
	case 0:
		this->run = false;

		break;

	case 1:

		break;
	

	case 2:

		break;



	}
}

void Userinterface::clearScreen()
{

	cout << "\033[3J\033[H\033[2J";
}
