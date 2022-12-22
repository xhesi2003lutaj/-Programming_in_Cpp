#include "Vector.h"
int main(){
    int n,i;
    double *arr;
    // Vector v=Vector();
    // cout<<"Empty constructor \n";
    // v.print();

    cout<<"enter vectors' size: ";
    cin>>n;
    arr=new double [n];
    cout<<"enter first vector data: \n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    Vector v1;
    v1.setsize(n);
    v1.setdata(arr);
    
    Vector v2;
    v2.setsize(n);
    cout<<"enter second vector data: \n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    v2.setdata(arr);
    delete []arr;
    cout<<"Vectors: \n";
    v1.print();
    v2.print();

    Vector v3;
    v3=v2;
    cout<<"\nCopy constructor \n";
    v3.print();
    
    cout<<"\nNorm:\n"<<v2.norm()<<endl;

    cout<<"The sum of the vectors: \n";
    (v1.add(v2)).print();

    cout<<"\nThe difference of the vectors: \n";
    (v1.diff(v2)).print();

    cout<<"\nThe product of the vectors: \n";
    cout<<v1.mult(v2)<<endl;
    
    return 0;
}