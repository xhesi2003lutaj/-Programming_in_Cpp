
/* CH-230-A
a12_p1.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#ifndef __SHAPES_H
#define __SHAPES_H
#include <bits/stdc++.h>
#define SQRT_3 1.73205080757
using namespace std;
class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
		void setname(string newname);

};

class CenteredShape : public Shape {  // inherits from Shape
	protected: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		 RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon: public RegularPolygon{
private:
	int side;
	string color;
public:
    void setside(int newside);
	int getside();
	Hexagon(const string&, double , double ,int ,int ,const string&);
	~Hexagon();
	void printhex();
	double area();
	int perimeter();
	void setcolor(string newcolor);
	const string& getcolor();
	 Hexagon(const Hexagon&);
};


#endif
