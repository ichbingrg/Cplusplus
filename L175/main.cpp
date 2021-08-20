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
	
	Base (const Base &other): value{other.value}{
		cout << "Base copy operator" << endl;
	}
	
	Base &operator= (const Base &rhs){
		cout << "Base operator=" << endl;
		if (this!= &rhs)
			value = rhs.value;
		return *this;
	
	}
	
};

class Derived: public Base{
	int double_value;
public:
	Derived():Base(),double_value(0){
		cout << "Derived no args const" << endl;
		
	}
	Derived(int x):Base (x), double_value(x*2){
		cout << "Derived args const" << endl;
	}
	~Derived(){
		cout << "Derived destructor" << endl;
	}
	Derived (const Derived &other ): Base(other) , double_value{other.double_value}{
		cout << "Derived copy operator" << endl;
	} 
	
	Derived &operator= (const Derived &rhs){
		cout << "Derived operator=" << endl;
		if (this != &rhs){
			Base::operator= (rhs);
			double_value= rhs.double_value;
		}
		return *this;
			
	}
};


int main(){
	
	//
	//Base b{100};
	//Base b1(b);
	//b=b1; 
	//
	cout << "============================================= \n" << endl;
	Derived d{1000};
	Derived d1(d);
	d=d1;
	
	
	
	
	return 0;
}
