#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

#include <iostream>


//Savingsaccount class
//Deposit method increments amount to be deposited by amount *int_rate percentage
//So a 1000 deposit at 5% interest rate will deposit 1000+50=1050 
class Savings_Account: public Account
{
	friend ostream &operator<< (ostream &os, const Savings_Account &account);
protected: double rate;
public:
	Savings_Account();
	Savings_Account(double balance , double rate);
	void deposit (double amount);
	//Withdraw inherited
	
};

#endif // SAVINGS_ACCOUNT_H
