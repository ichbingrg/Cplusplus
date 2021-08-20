#include "Savings_Account.h"


ostream &operator<< (ostream &os, const Savings_Account &account){
	os << "Savings Acocunt balance : " << account.balance << " Interest rate: " << account.rate << "%" <<endl;
	return os;
}
Savings_Account::Savings_Account():Savings_Account(0.0,0.0){
	
}


Savings_Account::Savings_Account(double balance , double rate)
			: Account(balance),rate(rate){
	
	
}


void Savings_Account::deposit (double amount){
	amount = amount + (amount * (rate/100));
	Account::deposit(amount);
	
}