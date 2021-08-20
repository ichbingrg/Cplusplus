#include <iostream>

using namespace std;


class Base {
public:
	virtual void say_hello() const {
		cout << "Hello I am a base obj. " << endl;
	}
	virtual ~Base() {}
};

class Derived : public Base {
public:
	virtual void say_hello() const override{ //no const
		cout << "Hello I am a derived obj. " << endl;
	}
	virtual ~Derived() {}
};

int main () {
	
	Base *p1 = new Base();
	p1-> say_hello();
	
	Derived *p2 = new Derived ();
	p2-> say_hello();
	
	Base *p3 = new Derived();
	p3-> say_hello();
	
	
	
	return 0;
}