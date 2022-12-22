/* CH-230-A
a13_p8.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<iostream>
#include<cstring>
#include<exception>

using namespace std;
class Car{
    public:

   Car();
   ~Car();

};
Car::Car(){}
Car::~Car(){}

class Motor: public exception{//derived from exception

    public:

        const char *what() const throw(){
            return "This motor has problems";
        }
        
       Motor();
   
};

Motor::Motor(){//catched error in the motor constructor
    try
    {
        Car();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

class Garage: public Motor{
    string str;
    public:
    Garage(string newstr){str=newstr;}
    Garage();
    string print(){return str;}
    
   
};
Garage::Garage(){
    throw Garage("The car in this garage has problems with the motor");
} 

int main(){
 
    try{
        Garage ();

    
    }catch(Garage m){
        cout<<m.print()<<endl;//catch and print
    }

    return 0;
}