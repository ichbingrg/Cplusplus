#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>

using namespace std;

class Account
{
	friend ostream &operator<< (ostream &os, const Account &account);
protected:
	double balance;
public:
	Account();
	Account (double balance);
	void deposit(double amount);
	void withdraw (double amount);
	~Account();

};

#endif // _ACCOUNT_H_
