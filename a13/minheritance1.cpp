/* CH-230-A
a13_p4.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<iostream>
using namespace std;
 
 class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }   
  A(){

  } 

};

class B: virtual public A
{
public:
  B()  { setX(10); }
};
 
class C: virtual  public A  
{
public:
  C()  { setX(20); }
};
 
class D:  public B, public C {

public:
//D(){B::setX(10);}

}; 
int main()
{
    D d;
    d.print(); cout<<endl;     //error: request for member ‘print’ is ambiguous  
    return 0;               //note: candidates are: ‘void A::print()’
                                // 9 |   void print() { cout << x; }
}
/*
This problem arises due to ambiguity, as indicated in the error
 print is defined in class A, so it show be made virtual,
  and a subobject will be created,thus solving ambiguity.
Or just add the specific class from which you want the print to be called from.
This also fixes ambiguity as we tell the comipler what to dp.
*/