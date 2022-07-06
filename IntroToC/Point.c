#include "Point.h"
#include <math.h>

double distance(Point point) {
	return sqrt(pow(point.x,2) + pow(point.y,2));
}

Point furtherPoint(Point p1, Point p2) {
	
	return (distance(p1) > distance(p2)) ? p1 : p2;
}
