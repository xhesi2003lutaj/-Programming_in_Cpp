#include "TournamentMember.h"

using namespace std;
string TournamentMember::location="Bremen";
string TournamentMember::mood="Happy";
int TournamentMember::energy_level=100;


    void TournamentMember::print(){
        cout<<"Firstname:        Lastname:        Birthday\n";
        cout<<firstname<<"            "<<lastname<<"          "<<birthday<<endl;
    }

    void TournamentMember::setdifferentmood(string newmood){
        mood=newmood;
    }
    void TournamentMember::printlocation(){

        cout<<"Location: "<<location<<endl;
        cout<<"Mood: "<<mood<<endl;
    }

    void TournamentMember::printenergy(){
        cout<<"Energy left to continue the race: "<<energy_level<<endl;
    }
    TournamentMember::TournamentMember(char *fn,char *ln,char *bd){
       // strcpy(firstname,fn);
        int i;
        for(i=0;i<MAX_L;i++){
            firstname[i]=fn[i];
        }
    
        strcpy(lastname,ln);
        strcpy(birthday,bd);
       // strcpy(location,lc); static a t
    }
    TournamentMember::TournamentMember(){
        cout<<"Empty constructor\n";

    }
    TournamentMember:: ~TournamentMember(){
        cout<<"Destructor being called\n";
    }
    TournamentMember::TournamentMember(const TournamentMember& b){
        cout<<endl;
        cout<<"Copy constructor being called"<<endl;
        strcpy(firstname,b.firstname);
        strcpy(lastname,b.lastname);
        strcpy(birthday,b.birthday);

        //    strcpy(location,b.location);  static members, don't copy
        //     strcpy(mood,b.mood);

        this->energy_level=b.energy_level;

    }