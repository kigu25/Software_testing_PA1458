#include "pch.h"
#include "../Software_lib/GameObject.h"


TEST(GameObject_test, Constructor) {

	Gameobject Obj("Door2");

	ASSERT_EQ(Obj.getName(), "Door2");
}


TEST(GameObject_test, ListInteractionTypes) {

	Gameobject Obj("Door2");

	ASSERT_EQ(Obj.listinteractionTypes(), "Open");
}
