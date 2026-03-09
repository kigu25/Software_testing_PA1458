#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "GameObject.h"
using namespace std;

class Scene {

public:

	Scene();
	Scene(const string& name);
	~Scene();

	void listAvailableObjects();
	bool isAvailable(string objectName);
	bool isGameObject(string objectName);

	bool isCharacterAvailable(string CharacterName);

	bool doTheInteraction(Gameobject* theObject, string theInteraction, string theOption);

	string getSceneName(); // Function used in scene's constructor_test
	Gameobject* getTheObject(string objectName);

	void addToInventory(Gameobject* obj);


private:

	vector <Gameobject*> objects;
	vector <string> Characters;

	string name; // Variabel used in scene's constructor_test
};
