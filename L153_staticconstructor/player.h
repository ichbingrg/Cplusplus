#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

using namespace std;

class player
{
private:
	
	static int num_players;
	string name;
	int health;
	int xp;
public:
	
	string get_name(){return name;}
	int get_health(){return health;}
	int get_xp(){return xp;}
	player(string name_val = "None", int health_val=0, int xp_val= 0); //constructor
	player(const player &source); //COPY
	~player(); //DESTRUCTOR
	static int get_num_players();
};

#endif // _PLAYER_H_
