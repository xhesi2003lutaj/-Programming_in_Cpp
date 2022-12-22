#include "Creature.h"

int main()
{
	string word;
	int hours=24;
	
	//enum word{wizard,Cheetah,Dog,quit};
	
	while (1)
	{
	     getline(cin,word);
		if(word=="wizard"){
			cout << "\nCreating a Wizard.\n";
			Wizard *w= new Wizard;
			w->run();
			w->hover();
			delete w;
		}
		else if(word=="Cheetah"){
			cout<<"\nCreating a Cheetah\n";
			Chitas *t=new Chitas;
			t->run();
			t->speed();
			delete t;
		}
		else if (word=="Dog"){
			
			cout<<"\nCreating a Dog\n";
			Dogs *d=new Dogs;	
			d->sethours(hours);
			d->run();
			d->print();
			delete d;				
			}

		else if(word=="quit"){
			exit(1);
		}
	     else{
				cout<<"Enter a valid word\n";
		 }
	
		
		}
	
	
    //call all the required constructors and methods
	// cout << "Creating an Creature.\n";
	// Creature c;
	// c.run();

	// Dogs s;
	// s.sethours(23);
	// cout<<"Second instance being called"<<endl;
	// s.print();
	return 0;
}
