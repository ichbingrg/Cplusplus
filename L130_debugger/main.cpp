//Debugger

#include <iostream>

using namespace std;

void swap( int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;    
}

int main(){

	int i=5;
    while (i>0){
        cout << i << endl;
        i--;
    }
    
    int x=100, y=200;
    cout << "\n---------------------------------------------------"
         << endl << endl
         << "x :" << x << endl
         << "y :" << y << endl;
    
    swap(&x,&y);
    
    cout << endl
         << "======================SWAPPED======================\n"<< endl
         << "x :" << x << endl
         << "y: " << y << endl << endl
         << "+++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;
    return 0;
}