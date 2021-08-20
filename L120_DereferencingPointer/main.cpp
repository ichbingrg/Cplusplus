#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
        string name = "Frank";
        string *string_ptr = &name;
        cout << " name: " << name << endl 
             << "*string_ptr: " << *string_ptr <<endl <<  endl;
             
        name = "Jack";
        cout << " name: " << name << endl 
             << "*string_ptr: " << *string_ptr << endl << endl;
             
        *string_ptr = "Charles";
        cout << " name: " << name << endl 
             << "*string_ptr: " << *string_ptr << endl << endl;
             
             
             
        cout << "-----------------------------------------------------" << endl;
        
        vector <string> stooges {"Larry", "Moe", "Curly" };
        vector <string> *vector_ptr{nullptr};
        
        vector_ptr = &stooges;
        
        cout << "First stooge: " << ( *vector_ptr).at(0) << endl;
        
        cout << "Stooges: ";
        
        for (auto stooge: *vector_ptr)
            cout << stooge << " " ;
        
        cout << endl;
            
        return 0;
}