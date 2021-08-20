#include <iostream>

using namespace std;

int main() {
    int scores[] = {100,98,96};
    cout << "Value of scores: " << scores<< endl;
    
    int *scores_ptr{scores};
    cout << "Value of scores_ptr: " <<  scores_ptr << endl;
    
    cout << "\nArray in subscript notation: --------------------------------------- " << endl
         << scores[0] << endl
         << scores[1] << endl
         << scores[2] << endl;
    
    cout << "\nPointer in subscript notation: --------------------------------------- " << endl
         << scores_ptr[0] << endl
         << scores_ptr[1] << endl
         << scores_ptr[2] << endl;
         
    cout << "\nArray in Offset notation : ----------------------------------------------" << endl
         << *(scores+0) << endl
         << *(scores+1) << endl
         << *(scores+2) << endl;
         
         
    cout << "\nArray in Offset notation : ----------------------------------------------" << endl
         << *(scores_ptr+0) << endl
         << *(scores_ptr+1) << endl
         << *(scores_ptr+2) << endl;
    
         
    
    
    return 0;
}