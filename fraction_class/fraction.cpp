#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}
 Fraction Fraction::operator+(Fraction &a ){
	int n = (this->num * lcm(this->den,a.den)/this->den) + (a.num * lcm(this->den,a.den) /a.den);
    int d = lcm(this->den,a.den);
    Fraction g(n,d);
    return g;
	// int n=(f1.num* (lcm(f1.den,f2.den))/f1.den)+(f2.num*(lcm(f1.den,f2.den))/f2.den);
	// int m=lcm(f1.den,f2.den);
	// return Fraction(n,m);
}
 
 Fraction Fraction::operator-(Fraction &f1){
	int n=(f1.num*lcm(this->den,f1.den)/this->den)-(f1.num*lcm(this->den,f1.den)/f1.den);
	int m=lcm(this->den,f1.den);
    Fraction x(n,m);
	return x;
}
Fraction Fraction::operator*(Fraction& c){
	Fraction res(this->num*c.num,this->den*c.den);
	return res;

}
// Fraction Fraction::operator/(Fraction c){
// 	Fraction res((this->num*c.den),(this->den*c.num));
// 	return res;
// }



ostream& operator<<(ostream& os, const Fraction& dt)
{
    os << dt.num << '/' << dt.den;
    return os;
}
istream& operator>>(istream& in,Fraction& ta){//overloaded istream operator
    cout<<"Enter numerator: ";
    in>>ta.num;
    cout<<"Enter denomenator: ";
    in>>ta.den;
    return in;
 
 
}
Fraction Fraction::operator=(Fraction& a){
       Fraction res(this->num=a.num,this->den=a.den);
       return res;
    // this->num=a.num;  or
	// this->den=a.den;
	// return *this;
}
Fraction operator>(Fraction f1,Fraction f2){
	if((f1.num*f2.den)>(f2.num*f1.den)){
		cout<<"The first is geater than the second "<<f1<<">"<<f2<<endl;
	}else{
		cout<<"The first is smaller than the second "<<f1<<"<"<<f2<<endl;
	}
	return f1;
}
Fraction operator<(Fraction f1,Fraction f2){
	if((f1.num*f2.den)<(f2.num*f1.den)){
		cout<<"The first is smaller "<<f1<<"<"<<f2<<endl;
	}else{
		cout<<"The first is geater "<<f1<<">"<<f2<<endl;
	}
	return f2;
}