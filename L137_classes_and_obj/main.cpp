#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
	//attributes
	string name;
	int health;
	int xp;
	
	//methods
	void talk(string);
	bool is_dead();
};

class Account {
  	//attribute
	string name;
	double balance;
	//methods
	bool deposit (double);
	bool withdraw (double);
};


int main(){
	
	Account frank_act;
	Account hero_act;
	
	Player frank;
	Player hero;
	
	Player players[]{frank, hero};
	
	vector <Player> player_vecc{frank};
	player_vecc.push_back(hero);
	Player *enemy{nullptr};
	enemy = new Player;
	
	delete enemy;
	
	
	return 0;
}