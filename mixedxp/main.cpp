#include <iostream>

using namespace std;

int main(){
    
    int ta{100};
    int tn{8};
    double av;
    
    av = ta/tn ;
    cout << av << endl;
    
    av = ta / tn;
    cout <<(double) av << endl;
    return 0;
}
