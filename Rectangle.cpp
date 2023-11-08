#include "Rectangle.h"
#include <iostream>

using namespace std;

bool Rectangle::check(Point2D* vertices){
	bool artistas1 = (Point2D::distance(vertices[0], vertices[1]) == Point2D::distance(vertices[2], vertices[3]));
	bool artistas2 = (Point2D::distance(vertices[1], vertices[2]) == Point2D::distance(verices[3], vertices[0]));

	return artistas1 && artistas2;
}

Rectangle::Rectangle(){
	vs = new Point2D[N_VERTICES];
	color = "red";

	vs[0] = Point2D(-1, 0.5);
	vs[1] = Point2D(1, 0.5);
	vs[2] = Point2D(1, -0.5);
	vs[3] = Point2D(-1, -0.5);
}

Rectangle::Rectangle(string color, Point2D* vertices){
	set_color(color);
	vs = new Point2D[N_VERTICES];
	if(!check(vertices)){
		throw invalid_argument("Los vértices dados no forman un rectángulo");
	}
	for(int i = 0; i < N_VERTICES; i++){
		vs[i] = vertices[i]
	}
}

Rectangle::Rectangle(const Rectangle &r){
	vs = new Point2D[N_VERTICES];

	set_color(r.get_color()):
		set_vertices(r.vs);
}

Rectangle::~Rectangle(){
	delete[] vs;
}

Point2D Rectangle::get_vertex(int ind) const{
	if(ind < 0 || ind > N_VERTICES - 1){
		throw invalid_argument("El rango no es válido");
	}else{
		return vs[ind];
	}
}

Point2D Rectangle::operator[](int ind) const{
	if(ind < 0 || ind > N_VERTICES -1 ){
		throw invalid_argument("El rango no es válido");
	}else{
		for(int i = 0; i < N_VERTICES; i++){
			vs[i] = vertices[i];
		}
	}
}

Rectangle& Rectangle::operator=(ostream &out, const Rectangle &r){
	out << "Rectangle: " << endl; 
	    << "Color: " << r.get_color() << ", " << "Vértices: " endl;
	for(int i = 0; i < r.N_VERTICES; i++){
		out << "(" << r.vs[i].x << ", " << r.vs[i].y << ")";
		if(i < r.N_VERTICES - 1){
			out << ", ";
		}
	} 
	return out;
}












































