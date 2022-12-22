#include "Complex.h"
 
 
Complex::Complex(){
      real=0;
    imaginary=0;
}
Complex::Complex(float set_real,float set_imaginary){
    real=set_real;
    imaginary=set_imaginary;
 
}
Complex::Complex(const Complex& x){
    real=x.real;
    imaginary=x.imaginary;
}
 
Complex::~Complex()
{
}
// }        you can use them but 
            //not actuall need in this case 
            //because the setter and getter 
            //are already in the constructors
// void Complex::setreal(float setreal){ 
//     real=setreal;
// }
// void Complex::setimaginary(float set_imaginary){
//     imaginary=set_imaginary;
// }
// float Complex::getreal(){
//     return real;
// }
// float Complex::getimaginary(){
//     return imaginary;
 
Complex Complex::conj(){
Complex a;
a.real=real;
a.imaginary=-(imaginary);
return a;
}
Complex Complex::add(Complex x){
    Complex a;
    a.real=real+x.real;
    a.imaginary=imaginary+x.imaginary;
    return a;
}
Complex Complex::diff(Complex x){
    Complex a;
    a.real=this->real-x.real;
    a.imaginary=this->imaginary-x.imaginary;
    return a;
}
Complex Complex::prod(Complex x){
    Complex a;
    a.real=(real*x.real)-(x.imaginary*imaginary);
    a.imaginary=(imaginary*x.real)+(x.imaginary*real);
    return a;
 
}
void Complex::print(){
    if(imaginary>0){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
 
    }else{
        cout<<real<<imaginary<<"i"<<endl;
    }
 //  cout<<real<<showpos<<imaginary<<"i"<<endl;
}
 
istream &operator>>(istream &in, Complex& c){
    cout<<"Enter real part ";
    in>>c.real;
    cout<<"enter imaginary part ";
    in>>c.imaginary;
    return in;
}
ostream& operator<<(ostream &out, Complex& c){
    out<<c.real<<" + "<<c.imaginary<<"i"<<endl;
    return out;
}
Complex Complex::operator+(Complex &c1){
    Complex res(this->real+c1.real,this->imaginary+c1.imaginary);
    return res;
}
Complex Complex::operator-(Complex &c1){
    Complex res(this->real-c1.real,this->imaginary-c1.imaginary);
    return res;
}
Complex Complex::operator*(Complex &c1){
    Complex res(((this->real*c1.real)-(this->imaginary*c1.imaginary)),((this->imaginary*c1.real)+(c1.imaginary*this->real)));
    return res;
}
Complex Complex::operator=(Complex &c1){
    Complex res(this->real=c1.real,this->imaginary=c1.imaginary);
    return res;
}