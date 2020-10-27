#pragma once

#include "Entity.h"
#include <list>
#include <vector>

class Scene
{

public:
	std::list<Entity> entites;
	std::list<Entity> test;


public:
	void addEntity(Entity e);
	void removeEntity(Entity e);


};

