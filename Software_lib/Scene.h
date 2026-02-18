#pragma once
#include <string>

using namespace std;
class Scene {
private:

public:
	void listAvailableElements();
	bool isAvailable(string gameElementName);
	bool isGameObject(string gameElementName);
 };