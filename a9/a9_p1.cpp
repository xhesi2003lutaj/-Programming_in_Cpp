/* CH-230-A
a9_p1.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include <iostream>
#include <string>
using namespace std;
int main(){
   string mystring;
    cout<<"Enter your data ";
    getline(cin,mystring);//reading the string
    cout<<"Your inputed data: "<<mystring<<"\n";
    return 0;
}

/*   alternative solution
#include <iostream>
#include<string>
using namespace std;

int main()
{
    string mystring;
    cin>>mystring;
    
    cout<<mystring;

    return 0;
}
*/