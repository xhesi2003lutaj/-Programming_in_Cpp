#include<bits/stdc++.h>
using namespace std;
class Car{
  private:
  string brand;
  string model;
  int price;

    public:
    void setbrand(string brand){this->brand=brand;}
    void setmodel(string newmodel){this->model=newmodel;}
    void setprice(int newprice){this->price=newprice;}
    int getprice(){return price;}
    void print(){cout<<" "<<brand<<" \n"<<model<<" \n"<<price<<endl;}
    ~Car(){cout<<"destructor";}
    Car(string n,string m,int p){this->brand=n;this->model=m;this->price=p;}
    Car(){}
};
int main(){
    Car c;
    c.setbrand("Benz");
    c.setmodel("latest");
    c.setprice(98728676);
    c.print();
    Car x("jkbbj","jbub",9);
    x.print();
     
    return 0;
}