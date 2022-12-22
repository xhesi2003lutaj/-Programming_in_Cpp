/*
CH-230-A
a11 p1.cpp 
Xhesilda Lutaj
x.lutaj@jacobs-university.de
*/

#ifndef BOX_H
#define BOX_H
//#endif
//#ifdef BOX_H
#include<bits/stdc++.h>
using namespace std;
class Boxes
{
private:
	double height;
	double width;
	double depth;
public:
   void setheight(double set_height);
   void setdepth(double set_width);
   void setwidth(double set_depth);

   double getheight();
   double getdepth();
   double getwidth();
   void print();
    Boxes();
	Boxes(Boxes&);
	Boxes(double set_height,double set_width,double set_depth);
	~Boxes();
	double volume();
};
#endif