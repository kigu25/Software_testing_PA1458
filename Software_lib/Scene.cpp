#include "pch.h"
#include "Scene.h"

Scene::Scene() {
    this->name = "";
    objects.push_back(new Gameobject("Door"));
    Characters.push_back("Goblin");
    Characters.push_back("Batman");
}

Scene::Scene(const string& name) {
    this->name = name;
    objects.push_back(new Gameobject("Door"));
    Characters.push_back("Goblin");
    Characters.push_back("Batman");
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
    }
    return false;
}
bool Scene::isGameObject(string objectName) {

    Gameobject* tempPtr = getTheObject(objectName);

    if (Gameobject* temp = dynamic_cast<Gameobject*>(tempPtr))
    {
        return true;
    }

    return false;
}

bool Scene::isCharacterAvailable(string CharacterName)
{
    for (int i = 0; i < Characters.size(); i++)
    {
        if (Characters[i] == CharacterName)
        {
            return true;
        }
    }
    return false;
}

bool Scene::doTheInteraction(Gameobject* theObject, string theInteraction, string theOption)
{
    if (theObject->startinteraction(theInteraction, theOption))
    {
        cout << "The object has changed." << endl;
        return true;
    }
  
    cout << "The object has NOT changed." << endl;
    return false;  
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

void Scene::addToInventory(Gameobject* obj) {
    objects.push_back(obj);
}

string Scene::getSceneName()
{
    return this->name;
}
