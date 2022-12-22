/* CH-230-A
a9_p7.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include <iostream>
using namespace std;
//swap integers
void swapping(int &a,int &b){
int temp;
temp=a;
a=b;
b=temp;

 } // swap string/char pointers
void swapping(const char *&a,const char* &b){ 
const  char *temp;
temp=a;
a=b;
b=temp;

 } // swap floats
void swapping(float &a,float &b){ 
float temp;
temp=a;
a=b;
b=temp;

} 
int main(void){
int a = 7, b = 15;
float x = 3.5, y = 9.2;
const char *str1 = "One";
const char *str2 ="Two";
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
swapping(a, b);
swapping(x, y);

//str1.swap(str2);
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
swapping(str1, str2);
cout << "str1=" << str1 << ", str2=" << str2 << endl;
return 0;
}