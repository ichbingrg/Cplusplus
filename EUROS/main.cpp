#include <iostream>
using namespace std;

int main(){
    
    const double dol_to_eur{1.19};
    cout <<" Enter the amount in dollar: ";
    double dol, eur;
    
    cin >> dol;
    eur = dol/dol_to_eur;

    cout << endl << " The amount in euro : " << eur << endl;
    
    return 0;
}
































/*#include <iostream>

using namespace std;

int main()
{
    const double usd_per_euro = 1.19;
    cout << "WELCOME TO THE EUR TO USD CONVERTER" << endl;
    
    cout << "Enter the value in EUR: ";
    double eur, dollar;
    cin >> eur;
    
    dollar = usd_per_euro * eur;

    cout << "The amount in USD : " << dollar << endl; 
 
    
    
    return 0;
    
}*/