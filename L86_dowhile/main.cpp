#include <iostream>

using namespace std;

int main(){
    
    char input{};
    
    
    do{
        cout << "\n-----------------"<< endl;
        cout << "1.  Do this" << endl;
        cout << "2.  Do that" << endl;
        cout << "3.  Do something else" << endl;
        cout << "Q.  Quit" << endl<<endl;
        cout << "Enter your selection: ";
        cin >> input;
        
        if (input == '1')
            cout << "doing this." << endl;
        
        else if (input == '2')
            cout << "Doing that." << endl;
        
        else if (input == '3')
            cout << "Doing something else." << endl;
        
        else if (input == 'q' || input =='Q')
            cout << "GOODBYE!!!" << endl;
        else
            cout <<"ERROR! "<< endl;
    }
    
    while ( input != 'q' && input != 'Q');
return 0;
}