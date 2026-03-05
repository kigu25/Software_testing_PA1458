#include "pch.h"
#include "../Software_lib/GameObject.h"


TEST(GameObject_test, Constructor) {

	Gameobject Obj("Door2");

	ASSERT_EQ(Obj.getName(), "Door2");
}


TEST(GameObject_test, ListInteractionTypes) {

	Gameobject Obj("Door2");

	ASSERT_EQ(Obj.listinteractionTypes(), "The door is open.The door is closed."); // We need to write the asserted line in this weired way since the listInteractionTypes() returns a string, mby change to return vector?
}


TEST(GameObject_test, changeStateOfObject) {

	Gameobject Obj("Door2");

	Obj.startinteraction("Open", "PlaceHolder");
	ASSERT_EQ(Obj.getIsOpen(), true);

	Obj.startinteraction("Close", "PlaceHolder");
	ASSERT_EQ(Obj.getIsOpen(), false);
}