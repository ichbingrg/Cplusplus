#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display ( vector <string> *v){

    //(*v).at(0)="Funny"; //( const vector <string> *v) doesn't work here
    for (auto s: *v)
        cout << s << " " ;
    cout << endl;
    
    //v=nullptr; //or *v={1,2,3,4} // (vector <string> *const v) doesn't work here 
     
    
}

void display (int *array, int a){
    while (*array != a)
        cout << *array++ << " ";
    cout << endl;
    
}

int main(){
    
    vector <string> stooges{"Larry","Joe", " Curly"};
    
    cout << endl;
    display( &stooges);
    
    cout << "-----------------------------------------"<< endl;
    int scores[]{100,98,97,79,85,-1};
    display (scores,-1);
    cout << endl;
    
    return 0;
}




/*
void swap(int *a, int *b){
    int t = *a;
    *a= *b;
    *b= t;
    cout <<  "||Swapped||" << endl;
}

int main(){
     int x=100, y= 200;
     
     cout << "x: " << x << "  y: " << y << endl;
     
     swap(&x,&y);
     
     cout << "x: " << x << "  y: " << y << endl;
    
    
    return 0;
}


*/


/* 
 void double_data(int *a){
     (*a)*=2;
 }


 int main(){
     int value = 10;
     int *int_ptr = nullptr;
     
     cout << "Value: " << value << endl;
     double_data(&value);
     cout << "Value: " << value << endl;
     
     cout << "-----------------------------------------" << endl;
     int_ptr = &value;
     double_data(int_ptr);
     cout << "Value: " << value << endl;
     
     cout << endl;
     
     
     
     return 0;
 }*/