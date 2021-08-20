#include <iostream>
#include <string>

using namespace std;

class Player{
private:
	string name;
	int health;
	int xp;
public:
	string get_name(){
		return name;
	}
	int get_health(){
		return health;
	}
	int get_xp(){
		return xp;
	}
	Player(string name_val="None", int health_val=0, int xp_val =0);
	//COpy const
	Player (const Player &source);
	//DEstructor
	~Player(){
		cout << "Destructor called for "+ name << endl;
	}
	
};

Player::Player(string name_val, int health_val, int xp_val):// when a new variable is initialised
	name{name_val}, health{health_val}, xp{xp_val}{
		cout << "Three args constructor for " + name << endl;
	}


Player :: Player (const Player &source) //when a copy gets created
	:name{source.name}, health{source.health}, xp{source.xp}{
		cout << "Copy constructor - made cpoy of " << source.name << endl;}
		
void display_Player(Player p) {
	cout << "Name: " << p.get_name() << endl;
	cout << "health: " << p.get_health() << endl;
	cout << "xp: " << p.get_xp() << endl;
}



int main(){
	Player empty{"XXXXXXXX",100,50};
	Player my_new_object(empty);
	display_Player (empty);
	display_Player (my_new_object);
	Player frank{"Frank"};
	
	
	Player hero {"hero", 100};
	Player villain{"Villain",100,55};
	
	return 0;
}