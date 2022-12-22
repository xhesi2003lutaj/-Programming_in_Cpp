#include "Vector.h"

Vector::Vector(){
    size=0;
    data=NULL;

}
Vector::~Vector(){
//   cout<<"Destructor being called\n";
//  delete []data;
}
void Vector::setsize(int new_size){
    //data=new double[size];
    size=new_size;
}
int Vector:: getsize(){
    return size;
}
Vector::Vector(int newsize,double* arr){
    size=newsize;
    data=new double[size];
    for(int i=0;i<size;i++){
        *data=arr[i];
    }

}
 Vector::Vector(const Vector& x){
    size=x.size;
    data=new double[size];
    for(int i=0;i<size;i++){
        data[i]=x.data[i];
 
    }

}
void Vector::setdata(double *new_data){
    data=new double[size];
   int i;
   for(i=0;i<size;i++){
    data[i]=new_data[i];
   }
}
double Vector::getdata(){
    return *data;

}
    
void Vector::print(){
    int i;
    for(i=0;i<size;i++){
       
  
    if(i==0){
        cout<<"("<<data[i]<<", ";

    }
    else if(i==(size-1)){
        cout<<data[i]<<")";
    }
    else{
         cout<<data[i]<<", ";
    }
    
      }
}
double Vector::norm(){
    int i;
    double norm=0;
   // data=new double[size];
    for(i=0;i<size;i++){
      norm+=data[i]*data[i];
    }
    
   return sqrt(norm);
}
Vector Vector::add(const Vector &v)
{
    Vector b;
    double *comp;
    comp = new double[size];
    for(int i=0;i<size;i++)
        comp[i]=data[i]+v.data[i];
    // Set the props of the vector
    b.size=size;
    b.setdata(comp);
    // Delete the allocated memory
    delete []comp;
    return b;
}
Vector Vector::diff(const Vector &v)
{
    Vector b;
    double *comp;
    comp = new double[size];
    for(int i=0;i<size;i++)
        comp[i]=data[i]-v.data[i];
    // Set the props of the vector
    b.size=size;
    b.setdata(comp);
    // Delete the allocated memory
  //  delete []comp;
    return b;
}
double Vector::mult(const Vector &x)
{
    double s=0;
    for(int i=0;i<size;i++)
    {
        s+=data[i]*x.data[i];
    }
    return s;
}
