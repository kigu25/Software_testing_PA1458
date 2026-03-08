#include "Character.h"

Character::Character(const string& name) {
    this->characterName = name;
}

Character::~Character() {}

string Character::getName() const {
    return characterName;
}

string Character::getInitialGreeting() {

}

string Character::query(string safeQuery) {

}

