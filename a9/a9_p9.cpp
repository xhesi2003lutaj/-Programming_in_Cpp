/* CH-230-A
a9_p9.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<iostream>
#include<cstring>
using namespace std;

int main(){
  
string mystring[17]={"computer", "television","keyboard", "laptop", "mouse",
                  "google","microsoft","tesla","meta","apple","gates","musk",
                        "depresion","love","MIT","smartness","exams"};

     string guessed1,answer;
     int count;
     int i;  
     string guessed;

while(1){
    srand(time(0));
    string guessed=mystring[rand()%17];//generate a rand string
     
     guessed1=guessed;//copying the rand number to replace chars
     int j;
     //because grader doesn't accept guessed.lenth inside the for loop
     j=guessed1.length();

  //replace vowels in the string
    for(i=0;i<j;i++){
       if(guessed1[i]=='a'|| guessed1[i]=='e'|| guessed1[i]=='i'|| 
        guessed1[i]=='o'|| guessed1[i]=='y'||guessed1[i]=='u'||guessed1[i]=='A'
                  || guessed1[i]=='E'|| guessed1[i]=='I'|| guessed1[i]=='O'|| 
                                           guessed1[i]=='U'||guessed1[i]=='Y'){
            guessed1[i]='_';

        }
     
    }
  cout<<guessed1<<"\n";
  count=1;
   string guess;
while(1){   //always ask for an input if not correct answer or not quit
   cin>>guess;
   
    if(guess=="quit"){
      exit(1);
    }
   else if(guess!=guessed){
    cout<<"NOT the one,guess again"<<"\n"; 
    count++;
   }
   else{
    cout<<"congrats"<<"\n";
    cout<<"You guessed "<<count<<" times"<<"\n";
    break;
   } 
 
   }
   
    cout<<"if you want to play again type yes,otherwise,quit "<<"\n";
    cin>>answer;
    
    if(answer=="quit"){
      cout<<"bye\n";
      exit(1);
    }if(answer!="yes" && answer!="quit"){
      cout<<"Enter a valid answer"<<"\n";
      cin>>answer;
    }
    }
    return 0;
}