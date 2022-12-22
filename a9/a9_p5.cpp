/* CH-230-A
a9_p5.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

 #include<iostream>
 #include<cstdlib>
 #include<ctime>
 using namespace std ;
 int main () {
 int die ;
 string name;
 cin>>name;
 int guess; 
 cin>>guess;
 //int count = 0;

 // init random number generator
 srand(static_cast <unsigned int >(time(0)));
 //while (count<10){
 //count++;
 
die = rand()%100+1;//rand number generator

 if(guess<die){
     cout<<"The number you guessed is small"<<"\n";
     
 }else if(guess>die){
       cout<<"The number you guessed is big"<<"\n";
     
 }else{
     cout<<"Congratulations"<<" "<<name<<",you guessed to right number."<<"\n";
 }
 return 0;
 }