#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 7;

int main() {
	Area *list[num_obj];						//  (1)   an array of pointers for 7 object in class Area
	int index = 0;								// (2)   initializing the value of index to 0
	double sum_area = 0.0;						// (3)   initializing the sum of areas to 0 
	double sum_per = 0.0;

	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)   creating an object of type ring and assigning a color name,an outer radius and an inner radius

	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);

	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);

	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);

	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);

	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);

	// cout << "Creating Square: ";
	// Square oqean_blue("OQEAN BLUE",15);

	list[0] = &blue_ring;						// (5)   reading all the objects to the array from index 0 to 6
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;                      
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	// list[6] = &oqean_blue;

	while (index < num_obj) {					// (7) loop through all the elemts of the list, the actions performed later will be froom index 0 to index 5(<6)
		(list[index])->getColor();
		double area = list[index]->calcArea();     // (8)   calculating the area for all the objects in the array and storing these values in area
		// double perimeter = list[index++]->calcPerimeter();
		sum_area += area;
		// sum_per += perimeter;
	}

	cout << "\n\nThe total area is " << sum_area << " units " << endl;	// (9) printing the sum of the areas of the objects 
	cout << "\nThe total perimeter is " << sum_per << " units"<<endl;

	return 0;
}

/*

                                                            Area 
			 	 					                 |
        	 	 			    		                |
			                                -----------------|--------------
                                            |                              |
                                            |                              |
											|                              |
		                        CIRCLE                            RECTANGLE
                                            |                               |
                                            |                               |
                                          RING                             SQUARE



*/


//spunon
// #include<iostream>
// #include "Area.h"
// #include "Circle.h"
// #include "Ring.h"
// #include "Rectangle.h"
// #include "Square.h"
 
// const int num_obj=7;
// int main() {
	
// 	Area *list[num_obj];						
// 	int index = 0;								
// 	double sum_area = 0.0;	                    
// 	double sum_primetre = 0.0;						
// 	cout << "Creating Ring: ";
// 	Ring blue_ring("BLUE", 5, 2);	
// 	                                 			
// 	cout << "Creating Circle: ";
// 	Circle yellow_circle("YELLOW", 7);

// 	cout << "Creating Rectangle: ";
// 	Rectangle green_rectangle("GREEN",5,6);

// 	cout << "Creating Circle: ";
// 	Circle red_circle("RED", 8);

// 	cout << "Creating Rectangle: ";
// 	Rectangle black_rectangle("BLACK", 10, 20);

// 	cout << "Creating Ring: ";
// 	Ring violet_ring("VIOLET", 100, 5);

// 	cout << "Creating Square: ";
// 	Square ocean_blue("BLUE",15);

// 	list[0] = &blue_ring;						
// 	list[1] = &yellow_circle;
// 	list[2] = &green_rectangle;
// 	list[3] = &red_circle;
// 	list[4] = &black_rectangle;
// 	list[5] = &violet_ring;
// 	list[6] = &ocean_blue;

// 	while (index < num_obj) {					
// 		(list[index])->getColor();				
// 		double area = list[index++]->calcArea();
	
// 		double perimetre = list[index++]->calcPerimeter();
// 			sum_area += area;
// 			sum_primetre +=perimetre;
		
// 	}

// 	cout << "\nThe total area is "
// 			<< sum_area << " units " << endl;	
// 	cout << "\nThe total perimetre is "
// 			<< sum_primetre << " units " << endl;	// (9) printing the sum of the areas of the objects 
// 	return 0;
// }