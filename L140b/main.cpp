#include <iostream>
#include "Account.h"
#include <string>

using namespace std;

int main(){
	
	Account frank_account;
	frank_account.set_name("Frank's Account");
	frank_account.set_balance(1000.0);
	
	if (frank_account.deposit(200.0))
		cout << "Deposit OK" << endl;
	else 
		cout << "Deposit Not Allowed" << endl;
	
	cout << frank_account.get_balance() << endl;
	
	if (frank_account.withdraw(500.0))
		cout <<"Withdrawal OK" << endl;
	else
		cout <<"No sufficinet funds" << endl;
		
	cout << frank_account.get_balance() << endl;
	
	if (frank_account.withdraw(1500.0))
		cout <<"Withdrawal OK" << endl;
	else
		cout <<"No sufficinet funds" << endl;
	cout << frank_account.get_balance() << endl;
	
	return 0;
	
	return 0;
}