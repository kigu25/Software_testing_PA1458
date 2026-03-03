#include "pch.h"
#include "../Software_lib/Scene.h"


TEST(scene_test, scene_standard_constructor) {

	Scene scene1;

	ASSERT_EQ(scene1.getName(), "");
}

TEST(scene_test, scene_name_constructor) {

	Scene scene1("Library");

	ASSERT_EQ(scene1.getName(), "Library");
}


TEST(scene_test, scene_available_gameOBJ) {

	Scene scene1;

	ASSERT_EQ(scene1.isAvailable("Door"), true);
}


TEST(scene_test, get_the_object) {

	Scene scene1;
	Gameobject* object = scene1.getTheObject("Door");

	ASSERT_NE(object, nullptr); // Make sure the pointer is NOT nullptr (_NE)
}