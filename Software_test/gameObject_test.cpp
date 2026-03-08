#include "pch.h"
#include "../Software_lib/GameObject.h"


TEST(GameObject_test, Constructor) {

	Gameobject Obj("Door2");

	ASSERT_EQ(Obj.getName(), "Door2");
}


TEST(GameObject_test, ListInteractionTypes) {

	Gameobject Obj("Door2");

	ASSERT_EQ(Obj.listinteractionTypes(), "OpenClose"); // We need to write the asserted line in this weired way since the listInteractionTypes() returns a string, mby change to return vector?
}


TEST(GameObject_test, changeStateOfObject) {

	Gameobject Obj("Door2");

	Obj.startinteraction("Open", "Break");
	ASSERT_EQ(Obj.getIsOpen(), true);

	Obj.startinteraction("Close", "Gently");
	ASSERT_EQ(Obj.getIsOpen(), false);
}




// Negative path
TEST(GameObject_negative, changeStateOfObject) {

	Gameobject Obj("Door2");

	Obj.startinteraction("Swim", "Slow");
	ASSERT_EQ(Obj.getIsOpen(), false);

	Obj.startinteraction("Fly", "High");
	ASSERT_EQ(Obj.getIsOpen(), false);
}



TEST(GameObject_negative, ListInteractionTypes) {

	Gameobject Obj("Door2");

	ASSERT_NE(Obj.listinteractionTypes(), "FlySwimFastCar"); 
}
