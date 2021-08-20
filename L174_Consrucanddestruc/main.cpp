#include <iostream>

using namespace std;

class Base{
	int value;
public:
	Base():value(0){
		cout << "Base no arg const" << endl;
	}
	Base(int x):value(x){
		cout << "Base arg const" << endl;
	}
	~Base(){
		cout << "Base destruct" << endl;
	}
	
};

class Derived: public Base{
	int double_value;
public:
	Derived():double_value(0){
		cout << "Derived no args const" << endl;
		
	}
	Derived(int x): double_value(x*2){
		cout << "Derived args const" << endl;
	}
	~Derived(){
		cout << "Derived destructor" << endl;
	}
};


int main(){
	
	Derived a(10);
	
	
	
	
	return 0;
}
