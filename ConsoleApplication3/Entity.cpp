#include "Entity.h"


void DrawFunc() {

}

void Entity::draw()
{
	DrawRectangle(this->x, this->y, this->width, this->height, this->color);
}
