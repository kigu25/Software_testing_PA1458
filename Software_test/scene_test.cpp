#include "pch.h"
#include "../Software_lib/Scene.h"

TEST(scene_test, constructor_test) {

	Scene scene1;

	ASSERT_EQ(scene1.isAvailable("Door"), true);
}