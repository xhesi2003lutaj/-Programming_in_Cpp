// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"

using namespace std; 
// Shape::Shape(const Shape&){
// 	this->name=name;

// }
Shape::Shape(const string& n) : name(n) {
}
void Shape::setname(string newname){
	name=newname;
}
void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
// CenteredShape::CenteredShape(const CenteredShape& cs){
// 	this->x = cs.x;////////////////////////////////////////////////////////////////////////////////////////////
// 	this->y = cs.y;
// }
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}
// RegularPolygon::RegularPolygon(const RegularPolygon& r){
// 	this->EdgesNumber = r.EdgesNumber;///////////////////////////////////////////////////////////////////////////////
// }


void Hexagon::setside(int newside){
	side=newside;
}
int Hexagon::getside(){
	return side;
}
Hexagon::Hexagon(const string&n, double nx, double ny,int nl,int newside,const string&r) : RegularPolygon(n,nx,ny,6){
      side=newside;
	  color=r;
}
Hexagon::~Hexagon(){
	cout<<"DEstructor being called here\n";
}
void Hexagon::printhex(){
	cout<<"Sides:"<<side<<endl;
	cout<<"color"<<color<<endl;
}
double Hexagon::area(){
	return (3*SQRT_3*side*side)/3;
}
int Hexagon::perimeter(){
	return side*6;
}
void Hexagon::setcolor(string newcolor){
	color=newcolor;
}
const string& Hexagon::getcolor(){
	return color;

}
Hexagon::Hexagon(const Hexagon& c):RegularPolygon(c.name, c.x, c.y, 6){
   this->side=c.side;/////////////////////////////////////////////////////
   //this->name=c.name;
   this->color=c.color;
   //this->x=c.x;
   //this->y=c.y;

}

