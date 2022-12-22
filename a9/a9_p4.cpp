/* CH-230-A
a9_p4.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<iostream>
#include<cstring>
using namespace std;
int my_count(int x,int y){
    return y-x;
}
int my_count(char c,char *string){
    int i;
    int count=0;
    int len=strlen(string);
    //iterating through to string
    for(i=0;i<len;i++){
    if(string[i]==c){
        count++;//increasing count
    }
    }i++;
     return count;
}
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    char string[100];
    cin>>string;  //enter the string 
    char c;
    cin>>c;  //enter character to check in the string
    cout<<"The differnece is "<<" "<<my_count(x,y)<<"\n";
    cout<<"The occurrence of "<<c<<" is "<<" "<<my_count(c,string)<<"\n";
    return 0;
}