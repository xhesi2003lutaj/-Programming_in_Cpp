
#include "fraction.h"

using namespace std;

int main(void)
{
	
	Fraction x;
	cin>>x;
	
	Fraction s;
	cin>>s;
	//cout<<s<<endl;  
	cout<<"Product of a*b: ";
    cout<<x*s<<endl;
	cout<<"Division of a/b: ";
	cout<<x/s<<endl;
	cout<<"Addition: ";
	cout<<x+s<<endl;
	cout<<"Difference: ";
	cout<<x-s<<endl;
    cout<<"using overloaded =: ";
    Fraction l=x;
    cout<<l<<endl;
	x>s;
	x<s;
	

	


	
}
