#include "Rectangle.h"
#include "Square.h"
#include  "Area.h"



Square::Square(const char* n,double m):Rectangle(n,m,m)
{
  side=m;
}

// Square::Square(const char* n,double m, double s):Rectangle(n,m,s)
// {

// }

Square::~Square()
{
}
double Square ::calcArea() const{
    cout<<"calcArea of square...\n";
    return side*side;
}
double Square::calcPerimeter()const{
    cout<<"calcPerimetre of square...\n";
    return 4*side;
    }
// Square::Square(const char *n, double s) : Rectangle(n,s,s) {
//     side = s;
// }

// Square::~Square() {

// }

// double Square::calcArea() const {
// 	std::cout << "calcArea of Square...";
// 	return side*side;
// }

// double Square::calcPerimeter() const {
// 	std::cout << "calcPerimeter of Square...";
// 	return 4*side;
// }
