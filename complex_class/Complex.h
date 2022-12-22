/* CH-230-A
a13_p2.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
 
#ifndef COMPLEX_H
#define COMPLEX_H
#include<bits/stdc++.h>
using namespace std;
 

class Complex
{
private:
    float real;
    float imaginary;
public:
 
    // void setreal(float);
    // void setimaginary(float);
 
    // float getreal();
    // float getimaginary();
 
    Complex();
    Complex(float set_real, float set_imaginary);
    Complex(const Complex&);
    ~Complex();
 
    Complex conj();
    Complex add(Complex);    
    Complex diff(Complex);
    Complex prod(Complex);
    friend istream& operator>>(istream &in, Complex& c);
    friend ostream& operator<<(ostream &in, Complex& c);
    Complex operator+(Complex &c1);
    Complex operator-(Complex &c1);
    Complex operator*(Complex &c1);
    Complex operator=(Complex &c1);
    
    void print();
 
};
 
#endif