#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num = 100;
    int &ref = num;
    
    cout << num << endl;
    cout << ref << endl;
    
    num = 200;
    cout << "\n-----------------------------------" << endl
         << num << endl
         << ref << endl;
         
    ref = 300;
    cout << "\n-----------------------------------" << endl
         << num << endl
         << ref << endl;
    
    
    return 0;
}