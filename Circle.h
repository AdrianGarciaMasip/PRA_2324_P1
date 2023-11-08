#include <iostream>
#include "Shape.h"

using namespace std;

class Circle : public Shape {
	private:
		Point2D center;
		double radius;
	public:
		Circle();
		Circle(string color, Point2D center, double radius);
		Point2D get_center() const;
		void set_center(Point2D p);
		double get_radius() const;
		void set_radius(double r);
		ostream& operator<<(ostream &out, const Circle &c);
};
