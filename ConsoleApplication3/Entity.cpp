#include "Entity.h"


void DrawFunc() {

}

void Entity::draw(void*)
{
	DrawRectangle(this->x, this->y, this->width, this->height, this->color);
}
