#include "pch.h"
#include "CharacterInterface.h"

Characterinterface::Characterinterface()
{
	this->currentlyActive = nullptr;
}

Characterinterface::~Characterinterface()
{
}

void Characterinterface::create(string theCharacter)
{
	this->currentlyActive = charRepository.getCharacter(theCharacter);
}

string Characterinterface::activate()
{
	if (currentlyActive == nullptr)
		return "No character currently selected.";

	InputSanitiser sanitiser;

	bool interacting = true;
	cin.ignore(1000, '\n');
	while (interacting)
	{
		cout << "\nYou:";
		string theQuery;
		
		getline(cin, theQuery);

		if (theQuery == "exit")
		{
			interacting = false;
			break;
		}

		string safeQuery = sanitiser.sanitiseInput(theQuery);

		if (safeQuery.empty())
		{
			cout << "Invalid input.\n";
			continue;
		}
		else {
			currentlyActive->query(safeQuery);
		}
	
		string formatted = currentlyActive->query(safeQuery);

		cout << formatted << endl;
	}
	return "Interaction ended.";
}
