#include "../headerFiles/header.h"
#include "../headerFiles/buttons.h"

bool mouseCordsPlay(float x1, float y1, float x2, float y2) {
	if (GetMouseX() >= x1 && GetMouseX() <= x2 && GetMouseY() >= y1 && GetMouseY() <= y2) {
		return true;
	}
	else {
		return false;
	}
}

bool mouseCordsRules(float x1, float y1, float x2, float y2) {
	if (GetMouseX() >= x1 && GetMouseX() <= x2 && GetMouseY() >= y1 && GetMouseY() <= y2) {
		return true;
	}
	else {
		return false;
	}
}

bool mouseCordsExit(float x1, float y1, float x2, float y2) {
	if (GetMouseX() >= x1 && GetMouseX() <= x2 && GetMouseY() >= y1 && GetMouseY() <= y2) {
		return true;
	}
	else {
		return false;
	}
}