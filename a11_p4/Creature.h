/*
CH-230-A
a11 p4.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de
*/
#ifndef CREATURE_H
#define CRREATURE_H
#include <bits/stdc++.h>

using namespace std;
//base class and the derived ones
class Creature {
	public:
		Creature();
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();

	private:
		int distFactor;
};

class Chitas :public Creature{
	private:
		int extra_distance;
	public:
		Chitas();
		void speed() const;
		~Chitas
		();
};

class Dogs :public Creature{
	private:
		int barks;
		int hours;
	public:
		Dogs();
		void sethours(int set_hours);
		~Dogs();
		void print();
		int gethours();
	};
#endif