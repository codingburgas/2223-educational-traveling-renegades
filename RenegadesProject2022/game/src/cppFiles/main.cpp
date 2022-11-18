#include "../headerFiles/header.h"

struct Ball { // how we will be using structures
	float x, y;
	float radius;
	float speed;
};

int main() {
	InitWindow(1000, 800, "Renageds - game"); // how to init a window
	SetWindowState(FLAG_VSYNC_HINT); // setting fps to the monitors max frame rate

	Texture2D Example = LoadTexture("../textures/example.png"); // how to init a picture

	Ball ball; // how we will be using structures
	ball.x = GetScreenWidth() / 2;
	ball.y = GetScreenHeight() / 2 + 100;
	ball.radius = 6;
	ball.speed = 3;

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(DARKGRAY);

		DrawCircle(ball.x, ball.y, ball.radius, WHITE); // how to draw a texture

		if (IsKeyDown(KEY_RIGHT)) ball.x += ball.speed;
		if (IsKeyDown(KEY_LEFT)) ball.x -= ball.speed;
		if (IsKeyDown(KEY_UP)) ball.y -= ball.speed;
		if (IsKeyDown(KEY_DOWN)) ball.y += ball.speed;

		DrawTexture(Example, 75, 100, WHITE); // picture init

		DrawFPS(10, 15);

		EndDrawing();
	}

	CloseWindow();
}