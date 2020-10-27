#include "Scene.h"

void Scene::addEntity(Entity e)
{
	this->entites.push_back(e);
}

void Scene::removeEntity(Entity e)
{
	this->entites.remove(e);
}
