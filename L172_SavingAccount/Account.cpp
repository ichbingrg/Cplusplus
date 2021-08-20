#include "Account.h"
#include <iostream>
#include <string>
using namespace std;
Account::Account()
		:balance(0.0), name ("An Account")
{
}

Account::~Account()
{
}

void Account::deposit (double amount){
	cout << "DEPOSIT " << amount << endl;
} 
	
void Account::withdraw(double amount){
	cout << "WITHDRAW " << amount << endl;
}