#include <iostream>

using namespace std;

int main(){
    
    int high_score = 100,
        low_score = 65;
    const int *score_ptr = &high_score;
    cout << *score_ptr << endl;
    //*score_ptr = 86; //ERROR
    score_ptr = &low_score;
    cout << *score_ptr << endl;
    
    
    return 0;
}