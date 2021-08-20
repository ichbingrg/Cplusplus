#include <iostream>

using namespace std;

int main(){
    int num=0;
    
    cout << "Enter a positive integer to start the countdown:  ";
    cin >> num;
    
    while (num > 0){
        cout << num << endl;
        --num;
    }
    cout << "BLASTOFF!" << endl;
    
    return 0;
}