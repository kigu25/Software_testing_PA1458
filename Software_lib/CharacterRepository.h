#pragma once
#include <string>
#include <vector>
#include "Character.h"
using namespace std;


class CharacterRepository
{
private:
	vector<Character*> characters;
public:
	CharacterRepository();
	~CharacterRepository();

	Character* getCharacter(string theCharacter);
};