#include <iostream>
using namespace std;

int num = 300;  //global variable


void static_local_example(){
    static int num = 5000; // retains it's value between calls
    cout << endl << "Local static num (start) :"<< num << endl;
    num += 1000;
    cout << "Local static num (end) :" << num << endl;
    
    
}
void global_example(){
    cout << endl <<"Global num in global_example (start) :" << num << endl;
    num *= 2;
    cout << "Global num in global_example (end) :" << num << endl;
}

void local_example(int x){
    int num = 1000;
    
    cout << endl << "Local num in local_example( start ): " << num<< endl;
    num = x;
    cout << "Local numm in local_example (end) : " << num << endl;
}
int main(){
    
    int num = 100;
    int num1= 500;
    
    cout << "Local num in main: " << num << endl;
    
    {
        int num = 200;
        cout << "Local num in inner block: " << num << endl;
        cout << "But still num1 :" <<num1 << endl;
    }
    
    cout << "Local num in main is still: " << num << endl;
    
    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
//    
    static_local_example();
    static_local_example();
    static_local_example();
    
    cout << endl;
    return 0;
}