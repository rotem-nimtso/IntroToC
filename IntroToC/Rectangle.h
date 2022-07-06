#pragma once

typedef struct Rectangle {
	int width;
	int height;
}Rectangle;

int area(Rectangle rectangle);

Rectangle greaterArea(Rectangle r1, Rectangle r2);

int canCounsume(Rectangle r1, Rectangle r2);
