#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string s1{"Frank"},
           s2{"Frank"},
           s3{"James"};
    string *p1{&s1},
           *p2{&s2},
           *p3{&s1};
    
    cout << boolalpha << (p1==p2) << endl;
    cout << boolalpha << (*p1 == *p2) << endl;
    cout << boolalpha << (p1 == p3) << endl;

    
        int scores[] {100,95,89,68,-1};
        int *scores_ptr{scores};
        
        while (*scores_ptr != -1){
            cout << *(scores_ptr) << endl;
            scores_ptr++;
        }
        // in the end of the loop: *scores_ptr = -1, So:
        
        scores_ptr=scores;
        cout << "\n-----------------------------------------------------" << endl;
        while (*scores_ptr != -1){
            cout << *(scores_ptr++) << endl;
            //scores_ptr++;
        }
        
        
        
        
    cout << "\n---------------------------------------------------------" << endl;
    
    char name[] = "Frank";
    
    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};
    
    char_ptr1 = &name[0];
    char_ptr2 = &name[3];
    
    cout << (char_ptr2)-(char_ptr1) << endl;
    
    
    return 0;
}