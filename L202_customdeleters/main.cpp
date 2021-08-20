#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Test{
	int data;
public:
	Test():data(0){
		cout<< "Tets Constructor (" << data << ")" << endl;}
	Test(int data):data(data){
		cout << "Test constructor (" << data << ")"  << endl;
	}
	int get_data() const;
	~Test(){
		cout << "Test destructor (" << data << ")"  << endl;
	}
	
};

int Test::get_data() const{
		return this->data;
	}

void my_deleter(Test *ptr){
	cout << "Using custom func deleter" << endl;
	delete ptr;
}

int main(){
	
	{
		shared_ptr <Test> ptr1{new Test(100),my_deleter};
	}
	
	cout << "==================================" << endl;
	{
		shared_ptr<Test> ptr2 (new Test{1000}, 
		[] (Test *ptr){
			cout << " Using lambda deleter" << endl;
			delete ptr;
		});
	}
	
	
	
	return 0;
}