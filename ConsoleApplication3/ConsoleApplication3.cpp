
#include "Entity.h"
#include "Scene.h"

#include "raylib.h"


// scene
Scene scene;


//class testEntity : public Entity
//{
//public:
//	testEntity() : Entity(64, 64, 100, 15, RED) {
//
//	}
//
//};



void init() {
	
}


int main()
{

	init();


	InitWindow(640,480,"Hello World");

	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();

		ClearBackground(RAYWHITE);

		for (auto& en : scene.entites) {
			en.draw();
		}

		DrawFPS(3, 3);
		EndDrawing();
	}

	
	CloseWindow();

	return 0;
}