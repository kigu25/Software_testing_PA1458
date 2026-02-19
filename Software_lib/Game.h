#pragma once
#include <string>
using namespace std;

class Game
{
public:
	Game();
	~Game();

	void selectGameObject(string name);
	void selectInteraction(###, string theInteraction);
	void setInteractionOptions(string theOptions);
	void startInteraction();
	void abortInteraction();

private:
	string gameName;
	
};