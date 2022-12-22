/* CH-230-A
a11_p6.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#ifndef VECTOR_H
#define VECTOR_H
#include<bits/stdc++.h>
using namespace std;
class Vector
{
private:
    int size;
    double *data;
public:
    Vector();
    ~Vector();
    Vector(int newsize,double* set_data);
    Vector(const Vector&);

    void setsize(int new_size);
    int getsize();
    void setdata(double *new_data);
    double getdata();
    
    void print();
    double norm();
    Vector add(const Vector&);
    Vector diff(const Vector&);
    double mult(const Vector&);

};



#endif