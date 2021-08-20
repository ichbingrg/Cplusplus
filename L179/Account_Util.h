#ifndef ACCOUNT_UTIL_H
#define ACCOUNT_UTIL_H
#include <vector>
#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"


using namespace std;
//helper functions for Account class
void display(const vector<Account> &accounts);
void deposit(vector <Account> &accounts, double amount);
void withdraw(vector <Account> &accounts, double amount);



//helper functions for Savings_Account class
void display(const vector<Savings_Account> &accounts);
void deposit(vector <Savings_Account> &accounts, double amount);
void withdraw(vector <Savings_Account> &accounts, double amount);

//helper functions for Checking_Account class
void display(const vector<Checking_Account> &accounts);
void deposit(vector <Checking_Account> &accounts, double amount);
void withdraw(vector <Checking_Account> &accounts, double amount);

//helper functions for Trust_Account class
void display(const vector<Trust_Account> &accounts);
void deposit(vector <Trust_Account> &accounts, double amount);
void withdraw(vector <Trust_Account> &accounts, double amount);





#endif // ACCOUNT_UTIL_H
