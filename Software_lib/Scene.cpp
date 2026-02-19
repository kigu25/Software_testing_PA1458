#include "Scene.h"

Scene::Scene() {

}

Scene::~Scene() {
    for (auto object : objects) {
        delete object;
    }
}

void Scene::listAvailableObjects() {
    for (auto* object : objects) {
        cout << object->getName() << endl;
    }
}

bool Scene::isAvailable(string objectName) {
    for (auto* object : objects) {
        if (object->getName() == objectName) {
            return true;
        }
        return false;
    }
}
bool Scene::isGameObject(string objectName) {
    
}

Gameobject* Scene::getTheObject(string objectName)
{
    for (int i = 0; i < objects.size(); i++)
    {
        if (objects[i]->getName() == objectName)
        {
            return objects[i];
        }
    }
    return nullptr;
}
