#include <iostream>

using namespace std;

int main(){
    
    int cents, dol, qtr, dm, nkl, pen;
    
    cout << "Enter the amount of cents: " ;
    cin >> cents;
    
    dol = cents / 100;
    cout << " Dollars: " << dol << endl;
    cents %= 100;
    
    qtr = cents/25;
    cout << " Quaters: " << qtr << endl;
    cents %= 25;
    
    dm = cents/10;
    cout << " dimes  : " << dm << endl;
    cents %= 10;
    
    nkl = cents/5;
    cout << " Nickels: " << nkl << endl;
    cents %= 5;
    
    cout << " pennies: " << cents << endl;
    
    
    
    
    return 0;
}