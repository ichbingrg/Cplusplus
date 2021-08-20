#include "player.h"

	
	
int player::num_players{0};

	
	
player::player(string name_val, int health_val, int xp_val):
		name{name_val},health{health_val},xp{xp_val}{
			++num_players;//constructor
}
	
	
player::player(const player &source):
		player{source.name, source.health, source.xp}{
			//COPY
}

player::~player(){
		--num_players;//DESTRUCTOR
}


int player::get_num_players(){
	return num_players;
}