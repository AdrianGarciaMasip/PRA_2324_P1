#include <iostream>
#include "Drawing.h"

using namespace std;

Drawing::Drawing(){
	shapes = new ListArray<Shape*>;
}

Drawing::~Drawing(){
	delete[] shapes;
}

void Drawing:add_front(Shape* shape){
	shapes->prepend(shape);
}

void Drawing::add_back(Shape* shape){
	shapes->append(shape);
}

void Drawing::print_all(){
	cout << "Información de todas las figuras creadas del dibujo: " << endl;
	for(int i = 0; i < shapes->size(); i++){
		shapes->get(i)->print();
	}
}

double Drawing::get_area_all_circles(){
	double totalArea = 0.0;
	for(int i = 0; i < shapes->size(); i++){
		Circle* circle = dynamic_cast<Circle*>(shapes->get(i));
		if(circle !=nullptr){
			totalArea += circle->area();
		}
	}
	return totalArea;
}

void Drawing::move:squares(double incX, double incY){
	for(int i = 0; i < shapes->size(); i++){
		Square* square = dynamic_cast<Square*>(shapes->get(i));
		if(square){
			square->translate(incX, incY);
		}
	}
}
