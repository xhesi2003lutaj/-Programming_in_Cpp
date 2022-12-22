#include "Box.h"
Boxes::Boxes(Boxes& b){

	this->height = b.height;
	this->width = b.width;
	this->depth = b.depth;
}

void Boxes:: setheight(double set_height){
	height=set_height;
}
void Boxes:: setdepth(double set_width){
	width=set_width;
}
void Boxes:: setwidth(double set_depth){
	depth=set_depth;
}
double Boxes:: getheight(){
    return height;
   }
double Boxes::getdepth(){
	return depth;
}
double Boxes:: getwidth(){
	return width;
}
Boxes::Boxes(double set_height,double set_width,double set_depth){
	height=set_height;
	width=set_width;
	depth=set_depth;
}
Boxes::Boxes(){
	height=0;
	width=0;
	depth=0;
}

Boxes::~Boxes()
{
}
void Boxes::print(){
	cout<<height<<depth<<width<<endl;
}
double Boxes:: volume(){
	return height*width*depth;
}

void print_list(Boxes*, int);