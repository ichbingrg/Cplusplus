#include <iostream>
#include "Mystring.h"


using namespace std;


int main()
{
	Mystring larry{"Larry"};
	Mystring moe {"Moe"};
	Mystring curly;
	
	cout << "Enter the third stooge's name: ";
	cin >> curly;
	
	cout << "The stooges are: " << larry << ", " << moe << " and " << curly << endl;
	
	
	
	
	cout << "\nEnter the three stooges separated by spaces: ";
	cin >> larry >> moe>> curly;
    
	cout << "The stooges are: " << larry << ", " << moe << " and " << curly << endl;
	




    return 0;
}
