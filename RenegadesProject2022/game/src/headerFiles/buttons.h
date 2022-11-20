#pragma once
#include "../headerFiles/header.h"

bool mouseCordsPlay(float x1, float y1, float x2, float y2);
bool mouseCordsRules(float x1, float y1, float x2, float y2);
bool mouseCordsExit(float x1, float y1, float x2, float y2);
bool mouseCordsOptionsButton(float x1, float y1, float x2, float y2);
bool mouseCordsGoBackButton(float x1, float y1, float x2, float y2);
bool mouseCordsExitButton(float x1, float y1, float x2, float y2);
bool mouseCordsLevelsButton(float x1, float y1, float x2, float y2);
bool mouseCordsfieldMapTextBoxBulgaria(float x1, float y1, float x2, float y2);
bool mouseCordsfieldMapTextBoxFrance(float x1, float y1, float x2, float y2);
bool mouseCordsfieldMapTextBoxGermany(float x1, float y1, float x2, float y2);
bool mouseCordsfieldMapTextBoxUkraine(float x1, float y1, float x2, float y2);
bool mouseCordsMarkBulgaria(float x1, float y1, float x2, float y2);
bool mouseCordsMarkFrance(float x1, float y1, float x2, float y2);
bool mouseCordsMarkGermany(float x1, float y1, float x2, float y2);
bool mouseCordsMarkUkraine(float x1, float y1, float x2, float y2);
bool mouseCordsBulgariaQuestionTrue(float x1, float y1, float x2, float y2);
bool mouseCordsBulgariaQuestionFalse(float x1, float y1, float x2, float y2);
bool mouseCordsFranceQuestionTrue(float x1, float y1, float x2, float y2);
bool mouseCordsFranceQuestionFalse(float x1, float y1, float x2, float y2);
bool mouseCordsGermanyQuestionTrue(float x1, float y1, float x2, float y2);
bool mouseCordsGermanyQuestionFalse(float x1, float y1, float x2, float y2);
bool mouseCordsUkraineQuestionTrue(float x1, float y1, float x2, float y2);
bool mouseCordsUkraineQuestionFalse(float x1, float y1, float x2, float y2);

struct Buttons {
	float x, y;
	float width, height;
	float borX, borY;
	float borW, borH;
	float TextX, TextY;
	float TextSize;
};