#ifndef SQUARE_H
#define SQUARE_H

#include <stdexcept>
#include <iostream>
#include "Rectangle.h"

using namespace std;

Class Square:public Rectangle{
	private:
		static bool check(Point2D* vertices);
	public:
		Square();
		Square(string color, Point2D* vertices);
		void set_vertices(Point2D* vertices);
		ostream& operator<<(ostream &out, const Square &square);


	void print() override{
		cout << "Cuadrado: " << endl;
		     << "Color: " << get_color() << ", " << "Vértices: " << endl;
		for(int i = 0; i < N_VECTORES; i++){
			cout << "(" << vs[i].x << ", " << vs[i].y << ")" << endl;
			if(i < N_VECTORES - 1){
				cout << ", " << endl;
			}
		}
	}
};

#endif

