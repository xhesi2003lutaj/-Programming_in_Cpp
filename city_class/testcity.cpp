
#include "City.h"


int main(){

//creating objects for the city class and its data members

    string name;
	int inhibitants;
	string major;
	double area;
	City city1,city2,city3;
	City arr[3]={city1,city2,city3};
	for(int i=0;i<3;i++){
		cout<<"Enter City ";
		cin>>name;
		arr[i].setname(name);
       
	     
		cout<<"Enter NR of people: ";
		cin>>inhibitants;
        arr[i].setinhibitants(inhibitants);
	
		cout<<"Entr Major: ";
		cin>>major;
        arr[i].setmajor(major);

		cout<<"Area: ";
		cin>>area;
        arr[i].setarea(area);


		arr[i].print_data();

	}

	return 0;
}