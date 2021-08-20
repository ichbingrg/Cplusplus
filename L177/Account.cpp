#include "Account.h"
#include <iostream>

using namespace std;

ostream &operator<< (ostream &os, const Account &account){
	os << "Account balance: " <<  account.balance;
	return os;
}

Account::Account()
	:Account(0.0){ //delegating cons
}

Account::~Account()
{
}



Account::Account (double balance):balance{balance}{
	
}
void Account::deposit(double amount){
	balance += amount;
	
}
void Account::withdraw (double amount){
	if (balance > amount)
		balance -= amount;
	else 
		cout << "Insufficient funds " << endl;
}