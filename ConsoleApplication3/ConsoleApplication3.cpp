
#include <stdio.h>

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

	using c_predfun = int(const void*, const void*);
	using cpp_predfun = int(const void*, const void*);

	for (int i = 0; i < 400; i++) {
		for (int j = 0; j < 400; j++) {
			scene.addEntity(Entity(i, j + 1, 2, 2, RED));
		}
	}

	init();


	InitWindow(640,480,"Hello World");

	//SetTargetFPS(60);

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