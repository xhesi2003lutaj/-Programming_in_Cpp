/* CH-230-A
a12_p3.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<bits/stdc++.h>
using namespace std;
#define MAX_L 36
#define MAX_B 11
class TournamentMember{
  protected:
    char firstname[MAX_L];
    char lastname[MAX_L];
    char birthday[MAX_B];

    static string location;
    static int energy_level;
    static string mood;
  public:
    void setfirstname(char* newfirstname){
    int i;
    for(i=0;i<MAX_L;i++){
        firstname[i]=newfirstname[i];
    }
    }
    void setlastname(char* newlastname){
    int i;
    for(i=0;i<MAX_L;i++){
        lastname[i]=newlastname[i];
        }    
    }
    void setbirthday(char* newbirthday){
    int i;
    for(i=0;i<MAX_B;i++){
        birthday[i]=newbirthday[i];
        }
    }

    static void setlocation(string newlocation){location=newlocation;}
    static void setdifferentmood(string);
    static void setenergy(int newenergy){ energy_level=newenergy;}
    TournamentMember(char*,char*,char*);
    TournamentMember();
    ~TournamentMember();
    TournamentMember(const TournamentMember&);

    char getfirstname(){return *firstname;}
    char getlastname(){ return *lastname;}
    char getbirthdate(){ return *birthday;}
  

    void print();

    void printlocation();
    void printenergy();
    static string getmood() { return mood; }
    static int getenergy() {return energy_level;}
};

class PLayer:public TournamentMember{
    protected:
     int number=9;
     char position[MAX_L];
     int goals;
     char foot[MAX_L];
public:
    
   // ~PLayer();
    void setgoals(int newnumber){goals=newnumber;}
    void setposition(char* newposition){strcpy(position,newposition);}
    //int goals;
    void setfoot(char* newfoot){strcpy(foot,newfoot);}

    int getnumber(){return goals;}
    string getposition(){return position;}
    string getfoot(){return foot;}
    PLayer(char*,char*,char*,int ,char* ,int ,char*);
    void printpl();
    PLayer(){}
    ~PLayer(){
        cout<<" Destructor being called\n";
    }
    int incrementgoals(){
        return goals++;
    }
    PLayer(const PLayer& b){this->energy_level=b.energy_level;
    strcpy(firstname,b.firstname);
    strcpy(lastname,b.lastname);
    strcpy(birthday,b.birthday);    
    strcpy(foot,b.foot);
    strcpy(position,b.position);
    this->goals=b.goals;
    }
};


