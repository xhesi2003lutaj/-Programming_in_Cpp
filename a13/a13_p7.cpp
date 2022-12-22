/* CH-230-A
a13_p7.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<iostream>
#include<cstdbool>
#include<cstring>
#include<exception>
using namespace std;
// class Exception{ or use this if you dont want to include exception
//   private:
//   char what[12];
//    public:
//    Exception(){}
//    Exception(char *newhat){ strcpy (what,newhat);}
//    char *printwhat(){return what;}
// };


class  OwnException: public exception{
  public:
    char str[30]={"Own exception"};
    char* what(){ return str;}
};
int function(int n){
  cout<<"Caught in main\n";
    return n;
}
int main(){
  int n;
  char str[30];
  OwnException c;

  while(1){//throw the error depending on the input type
     cin>>n;
     try{
     function(n);
     switch (n)
     {
      case 1:
          throw 'a';
          break;
      case 2:
          throw 12;
          break;
      case 3:
          throw true;
          break;
      
      default:
          throw str;//or throw Ownexception
          break;
     }

  }
  catch(char a){
   cout<<a<<endl;
  }
  catch(int n){
    cout<<n<<endl;
  }
  catch(bool x){
    cout<<x<<endl;
    
  }catch(...){
      cerr<<c.what()<<endl;
  
  }
  }
  return 0;
}

// class exception {
// public:
//   exception () throw();
//   exception (const exception&) throw();
//   exception& operator= (const exception&) throw();
//   virtual ~exception() throw();
//   virtual const char* what() const throw();
// }