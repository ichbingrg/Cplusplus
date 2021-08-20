#include <iostream>
#include <string>

using namespace std;

class Player{
private:
	string name;
	int health;
	int xp;
public:
	void set_name(string name_val){
		name= name_val;
	}
	//Overloaded Cons
	Player(){
		cout << "no args constructor called." << endl;
	}
	Player (string name){
		cout << "String arg constructor called." << endl;
	}
	Player( string name, int health, int xp){
		cout << "3 args constructor called" << endl;
	}
	~Player(){
		cout << "Destructor called for " << name << endl;
	}
	Player(){
		name = "None";
		health = 100;
		xp=3;
	}
};

int main(){
	{
	Player hero;
	hero.set_name("Sudip");
	}//auto destructor
	{
	Player frank;
	frank.set_name("Frank");
	
	Player Sidey("Sidey");
	Sidey.set_name("Sidey");
	Player villain("Villain",100,12);
	villain.set_name("Villain");
	}// auto destructor (villain, sidey, frank)
	
	Player *enemy = new Player;
	enemy->set_name("Enemy");
	
	Player *level_boss = new Player("Level Boss", 1000,300);
	level_boss->set_name("Level Boss");
	
	delete enemy;// destruct
	delete level_boss; // destruct
	
	return 0;
}