#pragma once
#include "../headerFiles/header.h"

bool mouseCordsPlay(float x1, float y1, float x2, float y2);
bool mouseCordsRules(float x1, float y1, float x2, float y2);
bool mouseCordsExit(float x1, float y1, float x2, float y2);
bool mouseCordsOptionsButton(float x1, float y1, float x2, float y2);
bool mouseCordsGoBackButton(float x1, float y1, float x2, float y2);
bool mouseCordsExitButton(float x1, float y1, float x2, float y2);

struct Buttons {
	float x, y;
	float width, height;
	float borX, borY;
	float borW, borH;
	float TextX, TextY;
	float TextSize;
};