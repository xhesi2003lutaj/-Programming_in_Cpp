#ifndef _AREA_H
#define _AREA_H
#include<bits/stdc++.h>
using namespace std;
class Area {
	private:
		char color[11];	
	public:
		Area(const char *n);
		virtual ~Area();
		void getColor() const;
		virtual double calcArea() const = 0;
		virtual double calcPerimeter() const=0;

};








#endif
