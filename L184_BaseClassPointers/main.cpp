#include <iostream>
#include <vector>

using namespace std;


class Account {
public:
		virtual void withdraw(double){
			cout << "In Account: Withdraw" << endl;
		}
			virtual ~Account (){
				cout << "Account: Destructor " << endl;
			
		}
};


class Savings: public Account {
public:
		virtual void withdraw(double){
			cout << "In Savings: Withdraw" << endl;
		}
		virtual ~Savings (){
				cout << "Savings: Destructor " << endl;
			}
};


class Checking: public Account {
public:
		virtual void withdraw(double){
			cout << "In Checking: Withdraw" << endl;
		}
		virtual ~Checking (){
				cout << "checking: Destructor " << endl;
			}
};


class Trust: public Savings {
public:
		virtual void withdraw(double){
			cout << "In Trust: Withdraw" << endl;
		}
		virtual ~Trust (){
				cout << "Trust: Destructor " << endl;
			}
};


int main(){
	cout << endl<<  "========POINTERS===========" << endl;
	Account *p1 = new Account();
	Account *p2 = new Savings();
	Account *p3 = new Checking();
	Account *p4 = new Trust();
	
	p1->withdraw(1000);
	p2->withdraw(1000);
	p3->withdraw(1000);
	p4->withdraw(1000);
	
	cout << endl<< "========ARRAY=============" << endl;
	Account *array[]= {p1,p2,p3,p4};
	for (int i =0 ; i< 4 ; ++i)
		array [i] -> withdraw(1000);
		
		
	
	cout << endl<< "========VECTORS=============" << endl;
	vector <Account *> accounts = {p1,p2,p3,p4};
	for (int i =0 ; i< 4 ; ++i)
		accounts.at(i) -> withdraw(1000);
		
		
	cout << endl <<"========CLEAN UP==============" << endl;
	delete p1;
	delete p2;
	delete p3;
	delete p4;
	
	return 0;
}