#include <iostream>
#include "Savings_Account.h"
#include "Account_Util.h"
#include <vector>

#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account.h"
#include <memory>
using namespace std;



//for make_unique
template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}


int main(){
	unique_ptr <Account> Moe;
	unique_ptr <Account> Larry;
	
	try {
		Moe = make_unique <Savings_Account> ("Moe", -20.0);
		cout << *Moe << endl;
		
	}
	catch (const IllegalBalanceException &er){
		cerr << er.what() << endl;
	}
	
	try {
		cout <<"==================================================" << endl;
		Larry = make_unique <Savings_Account> ("Larry", 1000, 1.5);
		cout << *Larry << endl;
		Larry->withdraw(500);
		cout << *Larry << endl;
		Larry ->withdraw (1000);
		cout << *Larry << endl;
	}
	
	catch (const IllegalBalanceException &er){
		cerr << er.what() << endl;
	}
	
	catch (const InsufficientFundExcept &er){
		cerr << er.what() << endl;
	}
	
	cout << "============================================" << endl;
	cout << "Program END" << endl; 
	
	return 0;
}

//
//int main(){
//	cout.precision(2);
//	cout << fixed;
//	
//	//Accounts
//	
//	vector<Account> accounts;
//	accounts.push_back(Account());
//	accounts.push_back(Account("Larry"));
//	accounts.push_back(Account("Moe",2000));
//	accounts.push_back(Account("Curly", 5000));
//	
//	display(accounts);
//	deposit (accounts, 1000);
//	withdraw(accounts, 2000);
//	
//	//Savings
//	
//	vector<Savings_Account> sav_accounts;
//	sav_accounts.push_back(Savings_Account());
//	sav_accounts.push_back(Savings_Account("Superman"));
//	sav_accounts.push_back(Savings_Account("Batman",2000));
//	sav_accounts.push_back(Savings_Account("Wonderwoman", 5000,5.0));
//	
//	display(sav_accounts);
//	deposit (sav_accounts, 1000);
//	withdraw(sav_accounts, 2000);
//	
//	//checking account
//	
//	
//	vector<Checking_Account> ch_accounts;
//	ch_accounts.push_back(Checking_Account());
//	ch_accounts.push_back(Checking_Account("Superman"));
//	ch_accounts.push_back(Checking_Account("Batman",2000));
//	ch_accounts.push_back(Checking_Account("Wonderwoman", 5000));
//	
//	display(ch_accounts);
//	deposit (ch_accounts, 1000);
//	
//	withdraw(ch_accounts, 2000);
//	
//	
//	//Trust Account
//	
//	vector<Trust_Account> tr_accounts;
//	tr_accounts.push_back(Trust_Account());
//	tr_accounts.push_back(Trust_Account("Superman"));
//	tr_accounts.push_back(Trust_Account("Batman",2000));
//	tr_accounts.push_back(Trust_Account("Wonderwoman", 5000, 5.0));
//	
//	display(tr_accounts);
//	deposit (tr_accounts, 5000);
//	
//	withdraw(tr_accounts, 1000);
//	
//	withdraw(tr_accounts, 1000);
//	
//	withdraw(tr_accounts, 1000);
//	
//	withdraw(tr_accounts, 1000);
//	return 0;
//}