#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

#include <iostream>
#include <string>

//Savingsaccount class
//Deposit method increments amount to be deposited by amount *int_rate percentage
//So a 1000 deposit at 5% interest rate will deposit 1000+50=1050 
class Savings_Account: public Account
{
	friend ostream &operator<< (ostream &os, const Savings_Account &account);
private: static constexpr const char *def_name = "Unnamed Savings Account";
		 static constexpr double def_balance = 0.0;
		 static constexpr double def_int_rate = 0.0;
protected: double rate;
public:
	
	Savings_Account(string name = def_name, double balance = def_balance, double rate= def_int_rate);
	bool deposit (double amount);
	//Withdraw inherited
	
};

#endif // SAVINGS_ACCOUNT_H
