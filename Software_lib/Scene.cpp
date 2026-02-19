#include "Scene.h"

Scene::Scene() {

}
Scene::~Scene() {

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