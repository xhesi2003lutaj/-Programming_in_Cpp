#include "City.h"

//class definitions
void City::setname(string newname){
		name=newname;
	}
	void City::setinhibitants(int newinhibitants){
           inhibitants=newinhibitants;
	}
    void City::setmajor(string& newmajor){
        major=newmajor;
	}
	void City::setarea(double newarea){
          area=newarea;
	}
    void City::print_data(){
		cout<<"City is named "<<name<<", has "<<inhibitants<<" inhibitants.";
		cout<< "Its major is: "<<major<<",and its area is: "<<area<<"km^2.\n";
		
	}
	int City::getinhibitants(){
     return inhibitants;

	}
	double City::getarea(){
     return area;
	}
