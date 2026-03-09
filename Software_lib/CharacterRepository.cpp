#include "pch.h"
#include "CharacterRepository.h"

CharacterRepository::CharacterRepository() {
    characters.push_back(new Character("Goblin"));
}

CharacterRepository::~CharacterRepository() {
    for (auto character : characters) {
        delete character;
    }
}

Character* CharacterRepository::getCharacter(string theCharacter) {
    for (auto* character : characters) {
        if (character->getName() == theCharacter) {
            return character;
        }
    }
    return nullptr;
}
