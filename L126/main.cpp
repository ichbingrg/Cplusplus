#include <iostream>
#include <vector> 
using namespace std;



void display(const int *const array, size_t size){
    for (size_t a =0; a< size ; ++a)
        cout << array[a] << " "; //cout << *(array+a) << " ";
    cout << endl;
}

int *create_array( size_t size, int init){
    int *new_array{nullptr};
    new_array = new int[size];
    
    for (size_t i = 0; i < size; ++i)
        new_array[i] = init; // (*new_array+i = init)
    return new_array;
}

int main(){
    
    int *my_array{nullptr}; //pointer
    int size, i;
    
    cout << "How many elements do you want in the array: " ;
    cin >> size;
    
    cout << "Initial value: ";
    cin >> i;
    
    my_array = create_array(size, i);
    
    display(my_array, size);
    
    delete [] my_array;
    
    return 0;
    
}