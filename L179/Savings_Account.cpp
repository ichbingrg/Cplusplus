#include "Savings_Account.h"
#include <string>

using namespace std;

ostream &operator<< (ostream &os, const Savings_Account &account){
	os << "[Savings Acocunt: " << account.name << " balance : " << account.balance << ", Interest rate: " << account.rate << "%]" <<endl;
	return os;
}

Savings_Account::Savings_Account(string name, double balance , double rate)
			: Account (name,balance),rate(rate){
	
	
}


bool Savings_Account::deposit (double amount){
		amount = amount + (amount * (rate/100));
		return Account::deposit(amount); //very imp
		
}