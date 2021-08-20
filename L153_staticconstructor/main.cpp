#include <iostream>
#include "player.h"

using namespace std;


void display_active_players(){
	cout << "Active players : " << player::get_num_players() << endl; 
}
int main(){
	display_active_players(); //0
	player sudip("Sudip");// 0+1
	display_active_players(); // 1
	{  
		player text{"Trsts"};  //construct : 1+1
 		display_active_players(); // 2
		} // destruct // 2-1 = 1
	player man(sudip); // 1+1
	display_active_players(); // 2
	
	
	player *enemy = new player{"Enemy", 1000, 1000};  //2+1
	display_active_players(); // 3
	
	delete enemy;  // 3-1
	display_active_players(); // 2
	
	
	return 0;
}