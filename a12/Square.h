#include "Rectangle.h"
#include "Area.h"
#ifndef SQUARE_H
#define SQUARE_H

class Square: public Rectangle{
private:
double side;

 
public:
    Square(const char* n,double m);

    ~Square();

	double calcArea() const;
	double calcPerimeter()const;
};
#endif











// class Square : public Rectangle {
//     public:
// 		Square(const char *n, double s);
// 		~Square();
// 		double calcArea() const;
// 		double calcPerimeter() const;
// 	private:
// 		double side;