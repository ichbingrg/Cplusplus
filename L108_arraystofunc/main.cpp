#include <iostream>

using namespace std;

void print_array(int arr[],size_t size){
    for (size_t a=0; a < size; ++a){
        cout << arr[a] << " " ;
    }
    cout << endl;
}

// set each array element to a value
void set_array(int arr[],size_t size, int value){
    for (size_t i =0; i < size ; ++i)
        arr[i]= value;
}
int main(){
    int my_scores[] {100,98,90,86,64};
    
    print_array(my_scores,5);
    set_array(my_scores,5,100);
    print_array(my_scores, 5);
    
    return 0;
}