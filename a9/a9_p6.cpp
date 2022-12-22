/* CH-230-A
a9_p6.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<iostream>
using namespace std;
//first function 
int myfirst(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        if((arr[i]>0) && (arr[i]%2==0)){
         return arr[i];  //return the firtst positive and even
            break;
           
        } 
    }
   return -1;

}
//double function
double myfirst(double arr[],int n){
    int i;
    for(i=0;i<n;i++){
        if((arr[i]<0) && (arr[i]==int(arr[i]))){
           return arr[i]; //return the smallest and integer value
            break;
        } 
    }
   return -1.1;

}
//character function
char myfirst(char *arr,int n){
    int i;
    char ch='0';
    for(i=0;i<n;i++){
      if(arr[i]!='a' && arr[i]!='e' && arr[i]!='i' && arr[i]!='o' 
        && arr[i]!='u' && arr[i]!='y' && arr[i]!='A' && arr[i]!='E' 
        && arr[i]!='I' && arr[i]!='O' && arr[i]!='U' && arr[i]!='Y'){

        return arr[i];
        break;
      }
    }
return ch;
}  
int main(){
    int te_plote[]={-2,3,-6,21,-1,86,3,4,5,6,7,8,9,10};
    double racional[]={2,4,-8.5,-3.5,-21,3,2};
    char bashketingellore[]={'a','e','i','o','u','y','b','c'};
    //calling and printing the functions
    cout<<"first positive and even value from the array is \n "<<myfirst(te_plote,14)<<"\n";
    cout<<"first negative element which does not have a fractional part is:\n "<<myfirst(racional,7)<<"\n";
    cout<<"first consonant of the array of chars is:\n "<<myfirst(bashketingellore,8)<<"\n";
   
    return 0;
}