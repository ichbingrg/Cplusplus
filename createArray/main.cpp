#include <iostream>
#include <string>
#include <vector>

using namespace std;

int *create_array( size_t s, int i=0 ){
    int *new_array{nullptr};
    new_array = new int[s];
    
    for (size_t a=0; a < s; ++a)
        new_array[a] = i;
        
    return new_array;
}

void display(const int *const array,size_t size){
    for (size_t a=0; a < size ; ++a)
        cout << *(array+a) << " ";
    cout << endl;
}


int main(){
    int *my_array{nullptr};
    
    size_t size = 0;
    int init =0;
    
    cout << "Enter Size: ";
    cin >> size;
    
    cout << "Enter initial: ";
    cin >> init;
    my_array = create_array(size, init);
    
    display(my_array, size);
    
    delete [] my_array;
    
    
    return 0;
}