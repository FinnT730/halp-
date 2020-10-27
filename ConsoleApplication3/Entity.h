#pragma once

#include "raylib.h"
#include <vector>

class Entity
{


public:
	int x;
	int y;
	int width;
	int height;
	Color color;


	Entity(int i, int j, int w, int h, Color c) {
		this->x = i;
		this->y = j;
		this->width = w;
		this->height = h;
		this->color = c;
	}

	~Entity() {
		/*delete& x;
		delete& y;
		delete& width;
		delete& height;
		delete& color;*/
	}

public:
	void draw();


};