#pragma once
#include "Character.h"
#include "CharacterRepository.h"
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
