#include "Shapes.h"
int main(){
    Hexagon hex("Blue",1,1,1,9,"Blue");

    cout<<"FIrst Hexagon :\n";
    hex.printhex();
    cout<<"Area: "<<hex.area()<<endl;
    cout<<"Perimeter: "<<hex.perimeter()<<endl;
    cout<<endl;
    cout<<"Second Hexagon :\n";
    Hexagon hex2("Green",1,1,1,15,"Green");

    hex2.printhex();
    cout<<"Area: "<<hex2.area()<<endl;
    cout<<"Perimeter: "<<hex2.perimeter()<<endl;
    cout<<endl;

    cout<<"Copy constructor being called"<<endl;  
    Hexagon h3(hex2);
    h3.printhex();
    cout<<"Area: "<<h3.area()<<endl;
    cout<<"Perimeter: "<<h3.perimeter()<<endl;

    return 0;
}