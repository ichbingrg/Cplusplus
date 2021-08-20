#include <iostream>

using namespace std;

int main(){
//    
//    int num;
//    
//    cout << "Enter a number: " ;
//    cin >> num;
//    
//    cout << "The given number "<< num << " is " << (((num%2)==0)?" even.":" odd.") << endl;
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num1!=num2){
        cout << "Largest: " << ((num1>num2)? num1:num2) << endl;
        cout << "smallest: " << ((num1<num2)? num1:num2) << endl;
    }
    else
        cout << "The numbers are same. " << endl;
    return 0;
}