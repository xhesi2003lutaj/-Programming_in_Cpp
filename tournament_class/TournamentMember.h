/* CH-230-A
a12_p2.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#ifndef TOURNAMENTMEBER_H
#define TOURNAMENTMEMBER_H
#include<bits/stdc++.h>
using namespace std;
#define MAX_L 36
#define MAX_B 11

class TournamentMember{
  private:
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

#endif




// class Location{
//   private:
//   static float x_coordinate;
//   static float y_coordinate;
//   public:
//   static void setlocation(float x_coor,float y_coor);
//   void printlocation();
// };