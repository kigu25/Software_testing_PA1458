#include "pch.h"
#include "Character.h"

Character::Character(const string& name) {
    this->characterName = name;
}

Character::~Character() {}

string Character::getName() const {
    return characterName;
}

string Character::getInitialGreeting() {
    return "Hello my name is " + this->characterName;
}

string Character::query(string safeQuery) {
    return "";
}

