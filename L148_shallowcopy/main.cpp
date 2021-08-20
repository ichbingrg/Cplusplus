//#include <iostream>
#include <iostream>
#include <string>

using namespace std;

class Shallow{
private:
	int *data;
public:
	void set_data_value(int d){
		*data=d;
	}
	int get_data_value(){
		return *data;
	}
	Shallow (int d); // constructor
 	Shallow (const Shallow &d);
	~Shallow();

};


Shallow :: Shallow (int d){
	data = new int; //pointer
	*data = d; // *data is the value of the pointer d
}

Shallow:: Shallow (const Shallow &d)
	:data{d.data}{ // Copy of the pointer value is made not of the value 
		cout << "Copy constructor - Shallow" << endl;
	}

Shallow :: ~Shallow(){
	delete data;
	cout << "Destructor freeing storage" << endl;
}

void display_shallow(Shallow s){
	cout << s.get_data_value() << endl;
}
int main(){
	
	Shallow obj1{100};
	display_shallow(obj1);
	
	Shallow obj2{obj1};
	obj2.set_data_value(1000);
	return 0;
}
