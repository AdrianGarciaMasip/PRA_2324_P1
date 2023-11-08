#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <stdexcept>
#include <iostream>
#include "Shape.h"
#include "Point2D.h"

using namespace std;

class Rectangle{
	protected:
		Point2D* vs;
	private:
		static bool check(Point2D* vertices);
	public:
		static int const N_VERTICES = 4;
		Rectangle();
		Rectangle(string color, Point2D* vertices);
		Rectangle(const Rectangle &r);
		~Rectangle();
		Point2D get_vertex(int ind) const;
		Point2D Rectangle::operator[](int ind) const;
		virtual void set_vertices(Point2D* vertices);
		Rectangle& operator=(const Rectangle &r);
		ostream& operator<<(ostream &out, const Rectangle &r);
		
}

#endif
