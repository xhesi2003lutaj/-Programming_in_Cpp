#include<bits/stdc++.h>
using namespace std;


float divide(float a,float b){
    if(b==0){
        throw runtime_error("invalid\n");//dont forget the parantheses
    }
     return a/b; 
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
     float result;
    
    try{
     result= divide(a,b);
     cout<<result;
          
    }
    catch(runtime_error& e){//dont forget &not working
        e.what();
      // exit(1);
    }
    return 0;
}