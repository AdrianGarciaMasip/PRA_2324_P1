#include <iostream>
#include "Point2D.h"
#include <cmath>

using namespace std;

Point2D::Point2D(){
	x = 0;
	y = 0;
	this->x = x;
        this->y = y;

}

double Point2D::distance(const Point2D &a, const Point2D &b){
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

bool operator==(const Point2D &a, const Point2D &b){
	return a.x == b.x && a.y == b.y;
}

bool operator!=(const Point2D &a, const Point2D &b){
	return a.x != b.x || a.y != b.y;
}

ostream &operator<<(ostream &out, const Point2D &p){
	out << "(" << p.x << ", " << p.y << ")";
	return out;
}
