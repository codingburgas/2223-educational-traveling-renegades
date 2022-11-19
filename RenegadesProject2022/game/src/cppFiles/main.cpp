#include "../headerFiles/header.h"
#include "../headerFiles/buttons.h"

int main() {
	InitWindow(1920, 1080, "Renegades - Europia");
	ToggleFullscreen();

	bool rulesBut = false;
	int rulesButCounter = 0;

	bool exitBut = false;

	while (!WindowShouldClose() && exitBut == false) {
		BeginDrawing();
		ClearBackground(WHITE);

		DrawText("WELCOME TO", GetScreenWidth() / 2 - 680, GetScreenHeight() / 2 - 470, 200, BLACK);
		DrawText("EUROPIA", GetScreenWidth() / 2 - 460, GetScreenHeight() / 2 - 230, 200, BLACK);

		Buttons But;
		But.width = 350;
		But.height = 86;
		But.x = GetScreenWidth() / 2 - But.width / 2;
		But.y = GetScreenHeight() / 2 - But.height / 2 + 100;
		But.borW = But.width + 8;
		But.borH = But.height + 8;
		But.borX = GetScreenWidth() / 2 - But.borW / 2;
		But.borY = GetScreenHeight() / 2 - But.borH / 2 + 100;
		But.TextSize = 40;
		But.TextX = But.x + But.width / 2 - But.TextSize;
		But.TextY = But.y + But.height / 2 - But.TextSize / 2;

		DrawRectangle(But.borX, But.borY, But.borW, But.borH, DARKGRAY);
		DrawRectangle(But.x, But.y, But.width, But.height, GRAY);
		DrawText("Play", But.TextX - 3.5, But.TextY, But.TextSize, BLACK);

		DrawRectangle(But.borX, But.borY + 120, But.borW, But.borH, DARKGRAY);
		DrawRectangle(But.x, But.y + 120, But.width, But.height, GRAY);
		DrawText("Rules", But.TextX - 14, But.TextY + 120, But.TextSize, BLACK);

		DrawRectangle(But.borX, But.borY + 240, But.borW, But.borH, DARKGRAY);
		DrawRectangle(But.x, But.y + 240, But.width, But.height, GRAY);
		DrawText("Exit", But.TextX + 3.5, But.TextY + 240, But.TextSize, BLACK);



		if (mouseCordsPlay(But.borX, But.borY, But.borX + But.borW, But.borY + But.borH) == true) {
			DrawRectangle(But.x, But.y, But.width, But.height, LIGHTGRAY);
			DrawText("Play", But.TextX - 3.5, But.TextY, But.TextSize, BLACK);
		}



		if (mouseCordsRules(But.borX, But.borY + 120, But.borX + But.borW, But.borY + 120 + But.borH) == true) {
			DrawRectangle(But.x, But.y + 120, But.width, But.height, LIGHTGRAY);
			DrawText("Rules", But.TextX - 14, But.TextY + 120, But.TextSize, BLACK);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
				rulesButCounter++;
				if (rulesButCounter % 2 != 0) {
					rulesBut = true;
				}
				else if (rulesButCounter % 2 == 0) {
					rulesBut = false;
				}
			}
		}

		if (rulesBut == true) {
			DrawRectangle(But.borX - 500, But.borY, But.borW, But.borH + 240, DARKGRAY);
			DrawRectangle(But.x - 500, But.y, But.width, But.height + 240, GRAY);
			DrawText("1. Our first rule is", But.x - 485, But.y + 15, 30, BLACK);
		}



		if (mouseCordsExit(But.borX, But.borY + 240, But.borX + But.borW, But.borY + 240 + But.borH) == true) {
			DrawRectangle(But.x, But.y + 240, But.width, But.height, LIGHTGRAY);
			DrawText("Exit", But.TextX + 3.5, But.TextY + 240, But.TextSize, BLACK);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
				exitBut = true;
			}
		}



		EndDrawing();
	}

	CloseWindow();
}