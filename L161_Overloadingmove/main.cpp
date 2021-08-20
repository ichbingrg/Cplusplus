#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main(){
	
	cout << boolalpha << endl;
	
	Mystring larry {"Larry"};
	Mystring moe {"Moe"};
	
	Mystring stooge = larry;
	
	larry.display();
	moe.display();
	
	cout << (larry==moe) << endl;
	cout << (larry==stooge) << endl;
 	
	larry.display();
	Mystring larry2 = -larry;
	larry2.display();
	
	
	Mystring stooges = larry + "Moe";
	stooges.display();
	
	//Mystring stooges = "Larry" + Moe;
	
	Mystring two_stooges = moe +" " + "Larry";
	two_stooges.display();
	
	Mystring three_stooges = moe + " " + larry + " " + "Curly";
	three_stooges.display();
	
	
	//Mystring a("Hello");
	//a= Mystring("Hola");
	//a= "Bonjour";
	//
	//
	//Mystring empty;
	//Mystring larry("Larry");
	//Mystring stooge(larry);
	//Mystring stooges;
	//
	//Mystring larry1{"LARRY"};
	//Mystring larry2;
	//
	//larry2=-larry1;
	//
	//larry2.display();
	//larry1.display();
	//
	//
	//empty= stooge; // copy assignment because stooge is a l value
	//
	//empty = Mystring (stooge); // stooge is now r value 
	//
	
	return 0;
}