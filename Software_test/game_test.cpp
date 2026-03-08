#include "pch.h"
#include "../Software_lib/Game.h"


TEST(game_test, select_gameObject) {

	Game Game;

	Game.selectGameObject("Door");
	ASSERT_NE(Game.getCurrentObj(), nullptr);
}

TEST(game_test, get_currentOption) {

	Game Game;

	EXPECT_EQ(Game.getCurrentOption(), "");

}

TEST(game_test, set_currentOption) {

	Game Game;

	Game.setInteractionOption("Lockpick");
	EXPECT_EQ(Game.getCurrentOption(), "Lockpick");
}




// Negative path
TEST(game_negative, select_gameObject_nonexsistent) {

	Game Game;

	Game.selectGameObject("Window");
	EXPECT_EQ(Game.getCurrentObj(), nullptr);
}


TEST(game_negative, get_currentOption) {

	Game Game;

	EXPECT_NE(Game.getCurrentOption(), "Lockpick");

}


TEST(game_negative, set_currentOption) {

	Game Game;

	Game.setInteractionOption("Lockpick");
	EXPECT_NE(Game.getCurrentOption(), "FlyingCar");
}
