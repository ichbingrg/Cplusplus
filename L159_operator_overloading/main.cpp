#include <iostream>
#include "Mystring.h"
#include <vector>


using namespace std;

int main(){
	
	Mystring a{"Hello"};  //overloaded constructor
	Mystring b;			//no args const
	b=a;				// copy assignment: b.operator = a
	b.display();
	b= "This is a test.";	// b.operator = "This is a test." first construction of This is a test in a temporary variable then, copy assignment to b
	b.display();
	
	
	Mystring empty;
	Mystring larry("Larry");
	Mystring stooge(larry);
	Mystring stooges;
	empty = stooge;
	
	empty.display();
	larry.display();
	stooge.display();
	empty.display();
	
	
	stooges = "Larry, Moe and Curly";
	stooges.display();
	
	vector <Mystring> stooges_vec;
	stooges_vec.push_back("Larry");
	stooges_vec.push_back("Moe");
	stooges_vec.push_back("Curly");
	
	cout<< "=======================LOOP1==========================" << endl;
	for (const Mystring a:stooges_vec)
		a.display();
	cout<< "=======================LOOP2==========================" << endl;
	for (Mystring &a:stooges_vec)
		a ="Changed";
	cout<< "=======================LOOP3==========================" << endl;
	for (const Mystring a:stooges_vec)
		a.display();
	
	return 0;
}