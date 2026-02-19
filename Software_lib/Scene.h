#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "GameObject.h"

using namespace std;
class Scene {
private:
	vector<Gameobject*> objects;
public:
	Scene();
	~Scene();
	void listAvailableObjects();
	bool isAvailable(string objectName);
	bool isGameObject(string objectName);
 };