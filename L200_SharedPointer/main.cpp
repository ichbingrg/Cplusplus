#include <iostream>
#include <string>
#include <memory>

using namespace std;



//
//class I_Printable
//{
//	friend ostream &operator<< (ostream &os, const I_Printable &obj);
//public:
//	virtual void print(ostream &os) const =0;
//	virtual ~I_Printable() = default;
//
//};
//
//ostream &operator<< (ostream &os, const I_Printable &obj){
//	obj.print(os);
//	return os;
//}

class Test //public I_Printable
{
		int data;
public:
		Test(): data(0){
			cout << "TEST CONST (" << data << ")" << endl;
		}
		Test(int data): data(data){
			cout << "TEST CONST (" << data << ")" << endl;
		}
		
		//virtual void print(ostream &os) const override;
		
		~Test(){
			cout << "TEST DEST (" << data << ")" << endl;
		}
};


void func(shared_ptr<Test> p){
	cout << "Use count: " << p.use_count() << endl;
}

int main(){
	//
	//shared_ptr <int> p1 {new int(100)};
	//cout << "Use count : " << p1.use_count() << endl;
	//
	//shared_ptr <int> p2 {p1};
	//cout << "Use count : " << p1.use_count() << endl;
	//cout << "Use count : " << p2.use_count() << endl;
	//
	//p1.reset();
	//cout << "Use count : " << p1.use_count() << endl;
	//cout << "Use count : " << p2.use_count() << endl;
	
	cout << "============================================================" << endl;
	shared_ptr<Test> ptr = make_shared <Test> (100);
	func(ptr);
	cout << "Use count:" << ptr.use_count() << endl;
	
	{
		shared_ptr <Test> ptr1 = ptr;
		cout << "Use Count: " << ptr.use_count() << endl;
		{
			shared_ptr <Test> ptr2 = ptr;
			cout << "Use Count: " << ptr.use_count() << endl;
			ptr.reset();
			
		}
		cout << "Use Count: " << ptr.use_count() << endl;
		
	}
	
	cout << "Use Count: " << ptr.use_count() << endl;	
	
	return 0;
}