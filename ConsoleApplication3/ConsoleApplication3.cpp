
#include "Entity.h"
#include "Scene.h"

#include "raylib.h"


class testEntity : Entity
{
public:
	testEntity() : Entity(64, 64, 80, 80, RED) {

	}
};

int main()
{

	Scene scene;

	testEntity testE;
	scene.addEntity(testE);

	InitWindow(640,480,"Hello World");

	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();

		ClearBackground(RAYWHITE);

		DrawRectangle(10,10,20,20,RED);


		EndDrawing();
	}

	
	CloseWindow();

	return 0;
}