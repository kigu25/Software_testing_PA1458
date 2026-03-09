#pragma once
#include "Character.h"
#include "CharacterRepository.h"
#include "InputSanitiser.h"
#include "InteractionEngine.h"
#include "PlotEngine.h"
#include <iostream>
#include <string>
using namespace std;


class Characterinterface {

public:

	Characterinterface();
	~Characterinterface();

	void create(string theCharacter);
	string activate();


private:

	Character* currentlyActive;
	CharacterRepository charRepository;
};
