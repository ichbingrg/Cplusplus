
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
	
	Player (string name_val, int health_val, int xp_val);
	
	Player (const Player &source);
	~Player ();
};

Player :: Player(string name_val, int health_val, int xp_val)
		: name{name_val}, health{health_val}, xp{xp_val}{
			cout << "3 agrs constructor for "+name << endl;
		} 
		
Player :: Player (const Player &d)
		: name{d.name}, health{d.health}, xp{d.xp}{
			cout << "Copy of " + d.name + "created." << endl;}