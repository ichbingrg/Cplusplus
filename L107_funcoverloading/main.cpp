#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print (string);
void print(string, string);
void print(vector <string>);

void print(int num){
    cout << "Printing int.." << num << endl;
}

void print(double num){
    cout << "Printing double.." << num << endl;
}
void print(string s){
    cout << "Printing string.." << s << endl;
}
void print(string s, string t){
    cout << "Printing 2 strings." << s << " and " << t<< endl;
}

void print (vector <string> v ){
    cout << "Printing vector of strings: " ;
    for (auto a: v)
        cout << a +" " ;
    cout << endl;
}

int main(){
    
    print(100);
    print ('A'); // 65(ASCII vslue of A) :  char is promoted into int 
    print("A");
    print (24.56);
    print(24.56F); //float is promoted to double as well 
    
    print ("C-style string");
    
    string s= "C++ string";
    print ( s);
    
    print("C style string", s);
    
    vector <string> three_stooges{"Larry","Moe", "Curly"};
    print(three_stooges);
    
    return 0;
}