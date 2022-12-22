/* CH-230-A
a9_p3.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<iostream>
using namespace std;

float absol(float x){
 if(x<0){
    return (-1)*x;//return the absolute value
 }
    else{
     return x;
 }
}
int main(){
    float x;
    cin>>x;
    //print
    cout<<absol(x)<<"\n";
    
    return 0;
}