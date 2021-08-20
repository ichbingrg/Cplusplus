#include "Account.h"
#include <iostream>

using namespace std;

ostream &operator<< (ostream &os, const Account &account){
	os << "[Account " << account.name <<  " balance: " <<  account.balance << "]";
	return os;
}

Account::Account(string name, double balance )
	:name(name), balance (balance){} 


bool Account::deposit(double amount){
	if (amount < 0)
		return 0;
	else {
		balance += amount;
		return 1;
	}
	
}
bool Account::withdraw (double amount){
	if (balance > amount){
		balance -= amount;
		return 1;
	}
	else {
		cout << "Insufficient funds " << endl;
		return 0;}
}

double Account::get_balance() const{
	return balance;
}