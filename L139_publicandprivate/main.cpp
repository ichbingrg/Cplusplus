#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
private:	//attributes
	string name ="Player";
	int health;
	int xp;
public:	
	//methods
	void talk(string text){
		cout << name << " says, \"" << text << " \"" << endl; 
	}
	bool is_dead();
};

class Account {
private:  	//attribute
	string name;
	double balance;
public:	//methods
	bool deposit (double);
	bool withdraw (double);
};

int main(){
	Player frank;
	frank.talk("Hello");
	return 0;
}