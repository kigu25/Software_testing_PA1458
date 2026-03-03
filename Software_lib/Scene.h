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

	string getName(); // Function used in scene's constructor_test
	Gameobject* getTheObject(string objectName);


private:

	vector<Gameobject*> objects;

	string name; // Variabel used in scene's constructor_test
};
