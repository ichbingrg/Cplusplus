#include "Checking_Account.h"

Checking_Account::Checking_Account(string name, double balance)
			:Account(name, balance){
	
}

ostream &operator<< (ostream &os, const Checking_Account &account){
	os << "[Checking Acocunt: " << account.name << " Balance: " << account.balance << "]" << endl;
	return os;
}



bool Checking_Account::withdraw (double amount){
	amount += withdraw_fee;
	return Account::withdraw(amount);
}
	