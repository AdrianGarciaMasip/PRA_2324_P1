#ifndef DRAWING_H
#define DRAWING_H

#include <stdexcept>
#include <iostream>
#include "Shape.h"
#include "Point2D.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "ListArray.h"
#include "Node.h"
#include "List.h"

using namespace std:

class Drawing{
	private:
		List<Shape*>* shapes:
	public:
		Drawing();
		~Drawing();
		void add_front(Shape* shape);
		void add_back(Shape* shape);
		void print_all();
		double get_area_all_circles();
		move_squares(double incX, double incY);
				
};

#endif
