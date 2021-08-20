#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;


int main(){
    //
    int num = 10;
    
    cout << "Value of num :" << num << endl
         << "size of num: " << sizeof num << endl
         << "Adress of num: " << &num << endl
         << "--------------------------------------------" << endl << endl;
     //    
    int *p;
    cout << "Value of p :" << p << endl
         << "size of p: " << sizeof p << endl
         << "Adress of p: " << &p << endl
         << "-------------------------------------------"<< endl << endl;
    //     
    p= nullptr;
    cout << "Value of p :" << p << endl
         << "size of p: " << sizeof p << endl
         << "Adress of p: " << &p << endl 
         << "--------------------------------------------" << endl << endl;
    //
    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector <string> *p4{nullptr};
    string *p5{nullptr};
    
    cout << endl <<"size of p1 is: " << sizeof p1 << endl
                 <<"size of p2 is: " << sizeof p2 << endl
                 <<"size of p3 is: " << sizeof p3 << endl
                 <<"size of p4 is: " << sizeof p4 << endl
                 <<"size of p5 is: " << sizeof p5 << endl
                 << "---------------------------------------------" << endl << endl;
    //
    int score{10};
    double high_temp{100.7};
    
    int *score_ptr=nullptr;
    
    score_ptr = &score;
    cout << "Value of score: " << score << endl
         << "Address of score: " << &score << endl
         << "Value of score_ptr: " << score_ptr << endl;
    




     
    return 0;
}