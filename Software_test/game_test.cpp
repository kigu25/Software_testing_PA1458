#include "pch.h"
#include "../Software_lib/Game.h"


TEST(game_test, select_gameObject) {

	Game Game;

	Game.selectGameObject("Door");
	ASSERT_NE(Game.getCurrentObj(), nullptr);
}


TEST(game_test, select_gameObject_nonexsistent) {

	Game Game;

	Game.selectGameObject("Window");
	EXPECT_EQ(Game.getCurrentObj(), nullptr);
}

