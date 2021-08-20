#include <iostream>
#include <string>

using namespace std;

class Player{
private:
	string name;
	int health;
	int xp;
public:
	Player();
	Player(string name_val);
	Player(string name_val, int health_val, int xp_val);
};

Player :: Player(string name_val, int health_val, int xp_val)
	: name{name_val}, health{health_val}, xp{xp_val}
	{ cout << name << " " << health << " " << xp << endl; }

Player::Player():
	Player{"none",0,0}{ };


Player::Player(string name_val):
	Player{name_val,0,0}{};



int main(){
	Player empty;
	Player Frank("Frank");
	Player villain("Villain", 100,55);
	
	return 0;
}