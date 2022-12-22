
#include<bits/stdc++.h>
using namespace std;
class Object3D{
    private:
    string name;
    public:
    void setstring(string ns){string =ns;}
    string getstring(){return string;}
    virtual float volume() const=0;
};
class Sphere:public virtual Object3D{
    protected:
    float radius:
    public:
    float getradius(){return radius;}
    void setrad(float rad){radius=rad;}
    Sphere(string n,float r):Object3D(n){
        radius=r;
    }
    float volume(){return radius*radius*radius*(4/3)*M_PI;}


};
class Cilinder:public Sphere{
  private:
  float height;
  public:
  float volume(){return height* radius*radius*M_PI;}
};
class Rectprism:public virtual Object3D{
    protected:
    float width;
    float height;
    float lenth;
    public:
    Rectprism(string n,float w,float h,float l):Object3D(n){
        width=w;
        height=h;
        lenth=l;

    }
    float volume(){return width*height*length;}

};
class Cube:public Rectprism{
    private:
    float side:
    public:
    Cube(string s,float e):Rectprism(s,e,e,e){
     side=e;
    }
    float volume(){return e*e*e;}

};
iny main(){

 // add your code below
int main(int argc, char * argv[]) {
Object3D * arr[5];
arr[0] = new Sphere("sphere", 1.3);
arr[1] = new RectPrism("rectprism", 2.0, 3.0, 4.0);
arr[2] = new Cylinder("cylinder", 2.0, 1.3);
arr[3] = new Cube("cube", 2.0);
arr[4] = new RectPrism("rectprism2", 1.0, 2.0, 3.5);
int i;
for(i=0; i<5; i++)
cout << arr[i]->volume() << endl;
for(i=0; i<5; i++)
delete arr[i];
return 0;
}
}
