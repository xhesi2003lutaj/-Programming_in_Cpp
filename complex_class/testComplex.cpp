#include "Complex.h"
using namespace std;
int main(){
    
int num1,num2,num3,num4;
    string info1,info2;
    ifstream input1,input2;
    input1.open("in1.txt",ios::out);
    input2.open("in2.txt",ios::out);
    ofstream output;
    output.open("outpt1.txt",ios::in|ios::trunc);
    if(input1.fail() ||input2.fail()){
        cout<<"Error in input"<<endl;
 
    }
    input1>>num1;
    cout<<num1<<endl;
    input2>>num2;
    input1>>num3;
    cout<<num3<<endl;
    cout<<num2<<endl;
    input2>>num4;
    cout<<num4<<endl;
    Complex x(num1,num3);
    Complex y(num2,num4);
    Complex xy=x+y;
    Complex xz=x*y;
    Complex xa=x-y;
    cout<<xy<<endl;
    cout<<xz<<endl;
    cout<<xa<<endl;
     
     if(output.fail()){
        cout<<"Error in output\n";
     }
 
     output<<xy<<endl<<xz<<endl<<xa<<endl;
     output.close();
     
    
 
    return 0;
}