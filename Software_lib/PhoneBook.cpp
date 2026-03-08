#include "pch.h"
#include "PhoneBook.h"

PhoneBook::PhoneBook() {
	contacts.push_back("Goblin");
}

PhoneBook::~PhoneBook() {

}

string PhoneBook::getContactMethod(string theCharacter) {
	for (auto contact : contacts) {
		if (contact == theCharacter) {
			return contact;
		}
	}
	return "";
}
