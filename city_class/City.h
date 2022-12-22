/*
CH-230-A
a10 p3.cpp 
Xhesilda Lutaj
x.lutaj@jacobs-university.de
*/
#ifndef CITY_H
#define CITY_H
#include<bits/stdc++.h>
using namespace std;

//classs declaration
class City
{
private:
    string name;
	int inhibitants;
	string major;
	double area;

public:
	void setname(string newname);
	void setinhibitants(int newinhibitants);
    void setmajor(string& newmajor);
	void setarea(double newarea);
    void print_data();
    
	int getinhibitants();
	double getarea();
};
#endif