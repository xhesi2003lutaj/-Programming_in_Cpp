#include "TournamentMember.h"
int main(){

    TournamentMember f;
    char finame[MAX_L]={"Xhesilda"};
    char laname[MAX_L]={"Lutaj"};
    char birthday[MAX_L]={"09,11,2003"};
    TournamentMember m;
    m.setfirstname(finame);
    m.setlastname(laname);
    m.setbirthday(birthday);
    m.print();
    m.printlocation();
    m.printenergy();
    TournamentMember b(m);//copy constructor


    cout<<endl;

    PLayer hi;
    char finame1[MAX_L]={"Eli"};
    char laname1[MAX_L]={"Mbiemri"};
    char birthday1[MAX_L]={" 2,02,1997"};
    char position[MAX_L]={"goalkeeper"};
    char foot[MAX_L]={"leftfoot"};
    hi.setfirstname(finame1);
    hi.setlastname(laname1);
    hi.setbirthday(birthday1);
  
    hi.setposition(position);
    hi.setfoot(foot);
    hi.setgoals(0);
   TournamentMember::setlocation("Cittadella");
   TournamentMember::setenergy(0);
   TournamentMember::setdifferentmood("Kot");

   hi.printpl();
   cout<<endl;
   TournamentMember::setlocation("Hamburg");
   hi.incrementgoals();
   cout<<"After moving the location:"<<endl;
    b.print();
    b.printlocation();
    b.printenergy();

    hi.printpl();
    cout<<"coppy constructor for player class\n";
    PLayer k(hi);
    k.printpl();
    return 0;
}
