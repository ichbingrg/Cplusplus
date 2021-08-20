#include "Account.h"
#include "Savings_Account.h"
#include <iostream>
#include <vector>
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;



//helper functions for Account class
void display(const vector<Account> &accounts){
	cout << "\n==== ACCOUNTS ===================================================" << endl;
	for (const auto &a : accounts)
		cout << a << endl;
}
void deposit(vector <Account> &accounts, double amount){
	cout << "\n=== DEPOSITING TO ACCOUNTS =======================================" << endl;
		for (auto &a:accounts){
			if (a.deposit(amount))
				cout << "Deposited... " <<amount << " to "<< a <<  endl;
			else 
				cout << "Failed to deposit to " << a << endl;
		}
}
void withdraw(vector <Account> &accounts, double amount){
	cout << "\n=== WITHDRAWING FROM ACCOUNTS =======================================" << endl;
		for (auto &a:accounts){
			if (a.withdraw(amount))
				cout << "Withdrew... " <<amount << " from "<< a <<  endl;
			else 
				cout << "Failed to withdraw from :  " << a << endl;
		}	
}


//helper functions for Savings_Account class
void display(const vector<Savings_Account> &accounts){
	cout << "\n==== SAVING ACCOUNTS ===================================================" << endl;
	for (const auto &a : accounts)
		cout << a << endl;
}


void deposit(vector <Savings_Account> &accounts, double amount){
	cout << "\n=== DEPOSITING TO SAVING ACCOUNTS =======================================" << endl;
		for (auto &a:accounts){
			if (a.deposit(amount))
				cout << "Deposited... " <<amount << " to "<< a <<  endl;
			else 
				cout << "Failed to deposit to " << a << endl;
		}
	
}
void withdraw(vector <Savings_Account> &accounts, double amount){
	cout << "\n=== WITHDRAWING FROM SAVING ACCOUNTS =======================================" << endl;
		for (auto &a:accounts){
			if (a.withdraw(amount))
				cout << "Withdrew... " <<amount << " from "<< a <<  endl;
			else 
				cout << "Failed to withdraw from :  " << a << endl;
		}	
}


//helper functions for Checking_Account class
void display(const vector<Checking_Account> &accounts){
	cout << "\n==== Checking ACCOUNTS ===================================================" << endl;
	for (const auto &a : accounts)
		cout << a << endl;
}


void deposit(vector <Checking_Account> &accounts, double amount){
	cout << "\n=== DEPOSITING TO Checking ACCOUNTS =======================================" << endl;
		for (auto &a:accounts){
			if (a.deposit(amount))
				cout << "Deposited... " <<amount << " to "<< a <<  endl;
			else 
				cout << "Failed to deposit to " << a << endl;
		}
	
}
void withdraw(vector <Checking_Account> &accounts, double amount){
	cout << "\n=== WITHDRAWING FROM Checking ACCOUNTS =======================================" << endl;
		for (auto &a:accounts){
			if (a.withdraw(amount))
				cout << "Withdrew... " <<amount << " from "<< a <<  endl;
			else 
				cout << "Failed to withdraw from :  " << a << endl;
		}	
}


//helper functions for Trust_Account class
void display(const vector<Trust_Account> &accounts){
	cout << "\n==== Trust ACCOUNTS ===================================================" << endl;
	for (const auto &a : accounts)
		cout << a << endl;
}


void deposit(vector <Trust_Account> &accounts, double amount){
	cout << "\n=== DEPOSITING TO Trust ACCOUNTS =======================================" << endl;
		for (auto &a:accounts){
			if (a.deposit(amount))
				cout << "Deposited... " <<amount << " to "<< a <<  endl;
			else 
				cout << "Failed to deposit to " << a << endl;
		}
	
}
void withdraw(vector <Trust_Account> &accounts, double amount){
	cout << "\n=== WITHDRAWING FROM Trust ACCOUNTS =======================================" << endl;
		for (auto &a:accounts){
			if (a.withdraw(amount))
				cout << "Withdrew... " <<amount << " from "<< a <<  endl;
			else 
				cout << "Failed to withdraw from :  " << a << endl;
		}	
}
