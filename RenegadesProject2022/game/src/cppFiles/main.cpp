#include "../headerFiles/header.h"
#include "../headerFiles/buttons.h"

int main() {
	InitWindow(1920, 1080, "Renegades - Europia");
	ToggleFullscreen();

	bool playBut = false;

	bool rulesBut = false;
	int rulesButCounter = 0;

	bool exitBut = false;

	bool optionsButMap = false;
	int optionsButMapCounter = 0;

	bool goBackButMap = false;

	bool exitButMap = false;

	bool levelsButMap = false;
	int levelsButMapCounter = 0;

	bool fieldMapTextBoxBulgaria = false;
	int fieldMapTextBoxBulgariaCounter = 0;

	bool fieldMapTextBoxFrance = false;
	int fieldMapTextBoxFranceCounter = 0;

	bool fieldMapTextBoxGermany = false;
	int fieldMapTextBoxGermanyCounter = 0;

	bool fieldMapTextBoxUkraine = false;
	int fieldMapTextBoxUkraineCounter = 0;
	
	bool mapFlagMarkBulgaria = false;
	int mapFlagMarkBulgariaCounter = 0;

	bool mapFlagMarkFrance = false;
	int mapFlagMarkFranceCounter = 0;

	bool mapFlagMarkGermany = false;
	int mapFlagMarkGermanyCounter = 0;

	bool mapFlagMarkUkraine = false;
	int mapFlagMarkUkraineCounter = 0;

	bool bulgariaQuestionTrue = false;
	bool bulgariaQuestionFalse = false;

	bool franceQuestionTrue = false;
	bool franceQuestionFalse = false;

	bool germanyQuestionTrue = false;
	bool germanyQuestionFalse = false;

	bool ukraineQuestionTrue = false;
	bool ukraineQuestionFalse = false;

	Texture2D map = LoadTexture("../textures/map.png");
	Texture2D optionsButFile = LoadTexture("../textures/settingsFile.png");
	Texture2D goBackButFile = LoadTexture("../textures/goBackFile.png");
	Texture2D exitButFile = LoadTexture("../textures/exitFile.png");
	Texture2D levelsButFile = LoadTexture("../textures/levelsFile.png");
	Texture2D countriesFieldMapFile = LoadTexture("../textures/countriesFieldMapFile.png");
	Texture2D fieldMapTextBoxFile = LoadTexture("../textures/fieldMapTextBoxFile.png");
	Texture2D fieldMapTextBoxBulgariaFile = LoadTexture("../textures/fieldMapTextBoxBulgariaFile.png");
	Texture2D fieldMapTextBoxFranceFile = LoadTexture("../textures/fieldMapTextBoxFranceFile.png");
	Texture2D fieldMapTextBoxGermanyFile = LoadTexture("../textures/fieldMapTextBoxGermanyFile.png");
	Texture2D fieldMapTextBoxUkraineFile = LoadTexture("../textures/fieldMapTextBoxUkraineFile.png");
	Texture2D mapFlagMarkFile = LoadTexture("../textures/mapFlagMarkFile.png");
	Texture2D questionsBackground = LoadTexture("../textures/questionsBackground.png");


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

		//---------------------------//

		if (mouseCordsPlay(But.borX, But.borY, But.borX + But.borW, But.borY + But.borH) == true) {
			DrawRectangle(But.x, But.y, But.width, But.height, LIGHTGRAY);
			DrawText("Play", But.TextX - 3.5, But.TextY, But.TextSize, BLACK);
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
				playBut = true;
			}
		}

		if (playBut == true) {
			DrawTexture(map, 0, 0, WHITE);
		}

		//---------------------------//

		if (playBut == false) {
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
				DrawText("1. Have fun", But.x - 485, But.y + 15, 45, BLACK);
				DrawText("2. Don't cheat", But.x - 485, But.y + 60, 45, BLACK);
			}
		}

		//---------------------------//

		if (playBut == false) {
			if (mouseCordsExit(But.borX, But.borY + 240, But.borX + But.borW, But.borY + 240 + But.borH) == true) {
				DrawRectangle(But.x, But.y + 240, But.width, But.height, LIGHTGRAY);
				DrawText("Exit", But.TextX + 3.5, But.TextY + 240, But.TextSize, BLACK);
				if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
					exitBut = true;
				}
			}
		}

		//---------------------------//

		if (playBut == true) {
			DrawTexture(optionsButFile, 30, 30, WHITE);
			if (mouseCordsOptionsButton(30, 30, 169, 142) == true) {
				if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
					optionsButMapCounter++;
					if (optionsButMapCounter % 2 != 0) {
						optionsButMap = true;
					}
					else if (optionsButMapCounter % 2 == 0) {
						optionsButMap = false;
					}
				}
			}

			if (optionsButMap == true) {
				DrawTexture(goBackButFile, 30, 160, WHITE);
				DrawTexture(exitButFile, 30, 290, WHITE);
				DrawTexture(levelsButFile, 30, 420, WHITE);

				if (mouseCordsGoBackButton(30, 160, 169, 268) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
						goBackButMap = true;
					}
				}

				if (goBackButMap == true) {
					playBut = false;
					optionsButMap = false;
					goBackButMap = false;
					optionsButMapCounter++;
				}

				//---------------------------//

				if (mouseCordsExitButton(30, 290, 169, 397) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
						exitButMap = true;
					}
				}

				if (exitButMap == true) {
					exitBut = true;
				}
				else {
					exitBut = false;
				}

				//---------------------------//

				if (mouseCordsLevelsButton(30, 420, 169, 529) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
						levelsButMapCounter++;
						if (levelsButMapCounter % 2 != 0) {
							levelsButMap = true;
						}
						else if (levelsButMapCounter % 2 == 0) {
							levelsButMap = false;
						}
					}
				}

				if (levelsButMap == true) {
					DrawTexture(countriesFieldMapFile, 200, 30, WHITE);
					DrawTexture(fieldMapTextBoxBulgariaFile, 239, 78, WHITE);
					DrawTexture(fieldMapTextBoxFranceFile, 239, 184, WHITE);
					DrawTexture(fieldMapTextBoxGermanyFile, 239, 290, WHITE);
					DrawTexture(fieldMapTextBoxUkraineFile, 239, 396, WHITE);
				}

			}
			
			//---------------------------//

			if (mouseCordsfieldMapTextBoxBulgaria(239, 78, 557, 176) == true) {
				if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
					fieldMapTextBoxBulgariaCounter++;
					if (fieldMapTextBoxBulgariaCounter % 2 != 0) {
						fieldMapTextBoxBulgaria = true;
					}
					else if (fieldMapTextBoxBulgariaCounter % 2 == 0) {
						fieldMapTextBoxBulgaria = false;
					}
				}
			}

			if (fieldMapTextBoxBulgaria == true) {
				DrawTexture(mapFlagMarkFile, 1060, 765, WHITE);
				if (mouseCordsMarkBulgaria(1100, 780, 1145, 870) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
						mapFlagMarkBulgariaCounter++;
						if (mapFlagMarkBulgariaCounter % 2 != 0) {
							mapFlagMarkBulgaria = true;
						}
						else if (mapFlagMarkBulgariaCounter % 2 == 0) {
							mapFlagMarkBulgaria = false;
						}
					}
				}
			}

			if (mapFlagMarkBulgaria == true) {
				DrawTexture(questionsBackground, 640, 30, WHITE);

				DrawText("When did Bulgaria", 780, 80, 100, BLACK);
				DrawText("reach its apogee?", 770, 180, 100, BLACK);

				DrawTexture(fieldMapTextBoxFile, 850, 350, WHITE);
				DrawText("918", 960, 370, 70, BLACK);

				DrawTexture(fieldMapTextBoxFile, 1300, 350, WHITE);
				DrawText("864", 1400, 370, 70, BLACK);

				if (mouseCordsBulgariaQuestionTrue(960, 370, 1278, 468) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true) {
						bulgariaQuestionTrue = true;
					}
				}
				else if (mouseCordsBulgariaQuestionFalse(960, 370, 1718, 468) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true) {
						bulgariaQuestionFalse = true;
					}
				}

				if (bulgariaQuestionTrue == true) {
					DrawTexture(questionsBackground, 640, 30, WHITE);
					DrawText("CORRECT", 750, 200, 200, BLACK);
				}
				else if (bulgariaQuestionFalse == true) {
					DrawTexture(questionsBackground, 640, 30, WHITE);
					DrawText("WRONG", 900, 200, 200, BLACK);
				}

			}

			//---------------------------//

			if (mouseCordsfieldMapTextBoxFrance(239, 184, 557, 282) == true) {
				if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
					fieldMapTextBoxFranceCounter++;
					if (fieldMapTextBoxFranceCounter % 2 != 0) {
						fieldMapTextBoxFrance = true;
					}
					else if (fieldMapTextBoxFranceCounter % 2 == 0) {
						fieldMapTextBoxFrance = false;
					}
				}
			}

			if (fieldMapTextBoxFrance == true) {
				DrawTexture(mapFlagMarkFile, 455, 545, WHITE);
				if (mouseCordsMarkFrance(495, 560, 540, 650) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true) {
						mapFlagMarkFranceCounter++;
						if (mapFlagMarkFranceCounter % 2 != 0) {
							mapFlagMarkFrance = true;
						}
						else if (mapFlagMarkFranceCounter % 2 == 0) {
							mapFlagMarkFrance = false;
						}
					}
				}
			}

			if (mapFlagMarkFrance == true) {
				DrawTexture(questionsBackground, 640, 30, WHITE);

				DrawText("Which is the biggest", 750, 80, 100, BLACK);
				DrawText("city in France?", 850, 180, 100, BLACK);

				DrawTexture(fieldMapTextBoxFile, 850, 350, WHITE);
				DrawText("Paris", 920, 370, 70, BLACK);

				DrawTexture(fieldMapTextBoxFile, 1300, 350, WHITE);
				DrawText("Arles", 1365, 370, 70, BLACK);

				if (mouseCordsFranceQuestionTrue(960, 370, 1278, 468) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true) {
						franceQuestionTrue = true;
					}
				}
				else if (mouseCordsFranceQuestionFalse(960, 370, 1718, 468) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true) {
						franceQuestionFalse = true;
					}
				}

				if (franceQuestionTrue == true) {
					DrawTexture(questionsBackground, 640, 30, WHITE);
					DrawText("WRONG", 900, 200, 200, BLACK);
				}
				else if (franceQuestionFalse == true) {
					DrawTexture(questionsBackground, 640, 30, WHITE);
					DrawText("CORRECT", 750, 200, 200, BLACK);
				}

			}

			//---------------------------//

			if (mouseCordsfieldMapTextBoxGermany(239, 290, 557, 388) == true) {
				if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
					fieldMapTextBoxGermanyCounter++;
					if (fieldMapTextBoxGermanyCounter % 2 != 0) {
						fieldMapTextBoxGermany = true;
					}
					else if (fieldMapTextBoxGermanyCounter % 2 == 0) {
						fieldMapTextBoxGermany = false;
					}
				}
			}

			if (fieldMapTextBoxGermany == true) {
				DrawTexture(mapFlagMarkFile, 780, 465, WHITE);
				if (mouseCordsMarkGermany(820, 470, 865, 560) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true) {
						mapFlagMarkGermanyCounter++;
						if (mapFlagMarkGermanyCounter % 2 != 0) {
							mapFlagMarkGermany = true;
						}
						else if (mapFlagMarkGermanyCounter % 2 == 0) {
							mapFlagMarkGermany = false;
						}
					}
				}
			}

			if (mapFlagMarkGermany == true) {
				DrawTexture(questionsBackground, 640, 30, WHITE);

				DrawText("What is the most used", 760, 80, 85, BLACK);
				DrawText("transport in Germany?", 750, 180, 85, BLACK);

				DrawTexture(fieldMapTextBoxFile, 850, 350, WHITE);
				DrawText("Buses", 900, 370, 70, BLACK);

				DrawTexture(fieldMapTextBoxFile, 1300, 350, WHITE);
				DrawText("Trains", 1335, 370, 70, BLACK);

				if (mouseCordsGermanyQuestionTrue(960, 370, 1278, 468) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true) {
						germanyQuestionTrue = true;
					}
				}
				else if (mouseCordsGermanyQuestionFalse(960, 370, 1718, 468) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true) {
						germanyQuestionFalse = true;
					}
				}

				if (germanyQuestionTrue == true) {
					DrawTexture(questionsBackground, 640, 30, WHITE);
					DrawText("CORRECT", 750, 200, 200, BLACK);
				}
				else if (germanyQuestionFalse == true) {
					DrawTexture(questionsBackground, 640, 30, WHITE);
					DrawText("WRONG", 900, 200, 200, BLACK);
				}

			}

			//---------------------------//

			if (mouseCordsfieldMapTextBoxUkraine(239, 396, 557, 486) == true) {
				if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
					fieldMapTextBoxUkraineCounter++;
					if (fieldMapTextBoxUkraineCounter % 2 != 0) {
						fieldMapTextBoxUkraine = true;
					}
					else if (fieldMapTextBoxUkraineCounter % 2 == 0) {
						fieldMapTextBoxUkraine = false;
					}
				}
			}

			if (fieldMapTextBoxUkraine == true) {
				DrawTexture(mapFlagMarkFile, 1237, 523, WHITE);
				if (mouseCordsMarkUkraine(1277, 538, 1322, 613) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true) {
						mapFlagMarkUkraineCounter++;
						if (mapFlagMarkUkraineCounter % 2 != 0) {
							mapFlagMarkUkraine = true;
						}
						else if (mapFlagMarkUkraineCounter % 2 == 0) {
							mapFlagMarkUkraine = false;
						}
					}
				}
			}

			if (mapFlagMarkUkraine == true) {
				DrawTexture(questionsBackground, 640, 30, WHITE);

				DrawText("Which sight is the", 900, 80, 80, BLACK);
				DrawText("most visited by tourists?", 730, 180, 80, BLACK);

				DrawTexture(fieldMapTextBoxFile, 850, 350, WHITE);
				DrawText("Kiev Pecherks", 875, 370, 36, BLACK);
				DrawText("Lavra", 960, 400, 36, BLACK);

				DrawTexture(fieldMapTextBoxFile, 1300, 350, WHITE);
				DrawText("St. Sophia's", 1360, 370, 36, BLACK);
				DrawText("Cathedral", 1380, 400, 36, BLACK);

				if (mouseCordsUkraineQuestionTrue(960, 370, 1278, 468) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true) {
						ukraineQuestionTrue = true;
					}
				}
				else if (mouseCordsGermanyQuestionFalse(960, 370, 1718, 468) == true) {
					if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true) {
						ukraineQuestionFalse = true;
					}
				}

				if (ukraineQuestionTrue == true) {
					DrawTexture(questionsBackground, 640, 30, WHITE);
					DrawText("CORRECT", 750, 200, 200, BLACK);
				}
				else if (ukraineQuestionFalse == true) {
					DrawTexture(questionsBackground, 640, 30, WHITE);
					DrawText("WRONG", 900, 200, 200, BLACK);
				}

			}

			//---------------------------//

		}

		EndDrawing();
	}

	CloseWindow();
}