#pragma once
#include <string>
using namespace std;

class Character {
private:
    string characterName;

public:
    Character(const string& name);
    ~Character();

    string getName() const;
    string getInitialGreeting();
    string query(string safeQuery);
};