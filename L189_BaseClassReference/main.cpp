#include <iostream>

using namespace std;


class Account {
public:
		virtual void withdraw( double amount) {
			cout << "IN ACCOUNT :: WITHDRAW" << endl;
		}
		virtual ~Account(){}
};


class Trust: public Account {
public:
		virtual void withdraw( double amount) {
			cout << "IN TRUST :: WITHDRAW" << endl;
		}
		virtual ~Trust(){}
};

void do_withdraw(Account &account, double amount){
	account.withdraw(amount);
}


int main(){
	
	Account a;
	Account &ref = a;
	ref.withdraw(1000);
	
	Trust t;
	Account &ref1 = t;
	ref1.withdraw(1000);
	
	Account a1;
	Trust a2;
	
	do_withdraw(a1, 1000);
	do_withdraw(a2,1000);
	
	
	
	
	return 0;
}