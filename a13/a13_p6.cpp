// vector::at
/* CH-230-A
a13_p6.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<vector>
#include<iostream>
#include<cstring>

using namespace std;

class Exception{
  private:
  char what[12];
   public:
   Exception(){}
   Exception(char *newhat){ strcpy (what,newhat);}
   char *printwhat(){return what;}
};
void function(){
  char str[13]={"out_of_range"};
  try
  {
   Exception t;
   throw  Exception(str);
  }
  catch(Exception e)  //const std::exception& use this if
                       // you dont want the error sms to be printed
  {
   cout<<"Error: ";
   throw;
  }
  
}
int main ()
{int n;
A:
cin>>n;

   try{
      if(n>19){
      function();
     }
  }
  catch(Exception e){
    cerr<<e.printwhat()<<endl;
    goto A; //ask for input until a valid index is added
 
  
}
    vector<int>myvector(20,8);
    cout<<myvector.at(n)<<endl;
    return 0;
}