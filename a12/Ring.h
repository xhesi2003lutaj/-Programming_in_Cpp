#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	private:
		double innerradius;
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcArea() const;
		double calcPerimeter()const;

};

#endif
