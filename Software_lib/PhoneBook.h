#pragma once
#include <string>
#include <vector>

using namespace std;

class PhoneBook {
private:
	vector<string> contacts;
public:
	PhoneBook();
	~PhoneBook();

	string getContactMethod(string theCharacter);

};
