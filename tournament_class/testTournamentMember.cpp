#include "TournamentMember.h"
int main(){

    TournamentMember f;
    char finame[MAX_L]={"Xheslda"};
    char laname[MAX_L]={"Lutaj"};
    char birthday[MAX_L]={"09,11,2003"};
    TournamentMember m;
      m.setfirstname(finame);
      m.setlastname(laname);
      m.setbirthday(birthday);
      m.print();
      m.printlocation();
      m.printenergy();
      
    TournamentMember b(m);
      b.print();
      b.printlocation();
      b.printenergy();

   cout<<endl;

    char finame1[MAX_L]={"Klaudia"};
    char laname1[MAX_L]={"G"};
    char birthday1[MAX_L]={"25,03,2004"};

   TournamentMember t;
    t.setfirstname(finame1);
    t.setlastname(laname1);
    t.setbirthday(birthday1);
    t.print();
    t.setdifferentmood("Angry");
    t.setenergy(99);
    t.setlocation("Berlin");
    t.printlocation();
    t.printenergy();

   cout<<endl;
   TournamentMember n(m);
    n.print();
    n.printlocation();
    n.printenergy();


    return 0;
}