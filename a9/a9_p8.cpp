/* CH-230-A
a9_p8.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<iostream>
using namespace std;
void subtract_max(int *arr, int n){
    
    int max=arr[0];
    for(int i=1;i<n;i++){//searching for the greatest number
      if(arr[i]>max){
        max=arr[i];
      }
    
    }
    for(int i=0;i<n;i++){//substracting the max
    arr[i]-=max;
    }
}

void deallocate(int *arr,int n){//deallocate

    delete [] arr;

}
int main(){
    int n,i;
    cin>>n;
    int *arr=new int[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    subtract_max(arr,n);
    for(i=0;i<n;i++){//print the new arr
      cout<<arr[i]<<"\n";
    }
    deallocate(arr,n);
      return 0;
  }
