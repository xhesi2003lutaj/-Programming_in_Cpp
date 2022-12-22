/*
CH-230-A
a12 p5.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de
*/
#ifndef FRACTION_H
#define FRACTION_H

#include<bits/stdc++.h>

using namespace std;
class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:	
    void setnum(int newnum){num=newnum;}
	void setden(int newden){den=newden;}
	int gatnum(){return num;}
	int getden(){return den;}
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	void print();				// prints it to the screen
	//overloaded operators
	// friend Fraction operator+(Fraction f1,Fraction f2 );(jo)
	Fraction operator+( Fraction& a);
	Fraction operator-(Fraction &f1);//mos me friend (jo)
	// friend Fraction operator*(Fration f3,Fraction f4); :(jo)
	Fraction operator*(Fraction&);

	Fraction operator/(Fraction c){
	Fraction res((this->num*c.den),(this->den*c.num));
	return res;
}
	friend istream& operator>>(istream& in,Fraction& ta);
	friend ostream& operator<<(ostream& os, const Fraction& dt);
    Fraction operator=(Fraction&);
    friend Fraction operator>(Fraction f1,Fraction f2);
	friend Fraction operator<(Fraction f1,Fraction f2);
};


#endif 
