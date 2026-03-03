#include "pch.h"
#include "../Software_lib/Scene.h"

TEST(scene_test, scene_constructor) {

	Scene scene1("Library");

	ASSERT_EQ(scene1.getName(), "Library");
}

TEST(scene_test, scene_with_gameOBJ) {

	Scene scene1;

	ASSERT_EQ(scene1.isAvailable("Door"), true);
}