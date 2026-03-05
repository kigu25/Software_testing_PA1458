#pragma once
#include <string>
#include "Scene.h"
using namespace std;

class Game
{
public:
	Game();
	~Game();

	void selectGameObject(string name);
	void selectInteraction(string theInteraction);
	void setInteractionOptions(string theOptions);
	void startInteraction();
	void abortInteraction();

	Gameobject* getCurrentObj();

private:
	string gameName;
	Scene scene1;
	Gameobject* currentObj;
};