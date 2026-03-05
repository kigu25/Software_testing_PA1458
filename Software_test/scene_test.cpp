#include "pch.h"
#include "../Software_lib/Scene.h"


TEST(scene_test, standard_constructor) {

	Scene scene1;

	ASSERT_EQ(scene1.getSceneName(), "");
}

TEST(scene_test, name_constructor) {

	Scene scene1("Library");

	ASSERT_EQ(scene1.getSceneName(), "Library");
}


TEST(scene_test, available_gameOBJ) {

	Scene scene1;

	ASSERT_EQ(scene1.isAvailable("Door"), true);
}


TEST(scene_test, is_game_obj) {

	Scene scene1;

	ASSERT_EQ(scene1.isGameObject("Door"), true);
}


TEST(scene_test, get_the_object) {

	Scene scene1;
	Gameobject* object = scene1.getTheObject("Door");

	ASSERT_NE(object, nullptr); // Make sure the pointer is NOT nullptr (_NE)
}


TEST(scene_test, changeTheObject_route) {

	Scene scene1;
	Gameobject* Object = scene1.getTheObject("Door");

	ASSERT_EQ(scene1.doTheInteraction(Object, "Open", "placeholder"), true);
}