#include "Creature.h"

//definitions for the constructors
    Creature::Creature(): distance(10)
    {
        cout<<"Creature constructor being called\n";
    }
    void Creature::run() const
    {
        cout << "Running " << distance << " meters!\n";
    }



    Wizard::Wizard() : distFactor(3)
    {
        cout<<"Wizard constructor being called\n";
    }

    void Wizard::hover() const
    {   cout<<"Wizard method being called\n";
        cout << "Hovering " << (distFactor * distance) << " meters!\n";
    }
    Wizard::~Wizard(){
        cout<<"\nWizard' destructor being called\n";
    }



    Chitas ::Chitas (): extra_distance(10)
    {
        cout<<"Cheetas constructor being called\n";
    }
    void Chitas:: speed() const{
        cout<<"Cheetas' method being called\n";
        cout<<"Cheetahs' speed is:"<<distance+extra_distance<<"m/s\n";
    }
    Chitas::~Chitas(){
        cout<<"\nCheetahs' destructor being called\n";
    }


    Dogs::Dogs():barks(4)
    {
        cout<<"Dogs constructor being called\n";
    }
    void Dogs::sethours(int set_hours)
    {   hours=set_hours;
    }
    int Dogs::gethours(){
        return hours;
    }
    void Dogs::print(){
        cout<<"Dogs' method being called\n";
        cout<<"The average number of barks in a day for a dog "<<(barks*hours)+4<<endl;
    }
    Dogs::~Dogs(){
        cout<<"\nDogs destructor being called\n";
    }