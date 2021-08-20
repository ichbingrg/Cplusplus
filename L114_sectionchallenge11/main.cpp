/* 
 * using a collection/list of integers and allowing users to select options from a menu to perform operations
 * 
 * P-Print numbers
 * A- Add a number
 * M- Display mean of the numbers
 * S- Display the smallest number 
 * L- Display largest number
 * Q- Quit
 * "Unknown selection, please try again" if false input. and display menu items again.
 * 

*/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;
 void show_option(){
     cout << "\nP- Print numbers"
             "\nA- Add a number"
             "\nM- Display mean of a number"
             "\nS- Display the smallest number"
             "\nL- Display largest number"
             "\nQ- Quit" << endl << endl;
 }
 char get_option(){
     char sel;
     cout << "Enter your selection: ";
     cin >> sel;
     return toupper(sel);
 }
 
 void show_min(vector <int> s){
     int a=s.at(0);
     for (auto i: s){
         if (a >= i)
             a= i;
     }
     
     cout <<endl << "Minimum: " << a << endl;
     
 }
 
 void show_max(vector <int> s){
     int a=s.at(0);
     for (auto i: s){
         if (a <= i)
             a= i;
     }
     
     cout <<endl << "Maximum: " << a << endl;
     
 }
 
 void calc_mean(vector <int> s){
     int total{},count=0;
     
     for (auto i : s){
         total+=i;
         count++;
     }
     
     double mean = total /count;
     
     cout << fixed<< setprecision(2) << "Mean: " << mean << endl;
     
     
 }
 
 void quit(){
     cout << "GOODBYE! -------------------------------------"<< endl;
     
 }
 
 void add_num(vector <int> &s){
     cout <<"Enter the number to be added: " ;
     int add;
     cin >> add;
     s.push_back(add);
     cout << add << " has been added!" << endl;
 }
 
 
 
 void print_numbers( vector <int> s){
     cout << "[" ;
     for (auto i : s)
         cout << i << " ";
    cout << "]" << endl;
 }
 
 void wrong_op(){
     
    cout << "Invalid option. Try again!" << endl;
     
 }
 
int main(){
    
    vector <int> v{10,20,30,40};
    
    char a;
    do{
        show_option();
        
        a = get_option();
        if (a == 'P')
            print_numbers(v);
        else if (a== 'A')
            add_num(v);
        else if ( a== 'M')
            calc_mean(v);
        else if ( a== 'L')
            show_max(v);
        else if (a=='S')
            show_min(v);
        else if (a == 'Q')
            {quit();
             break;
            }
        else
            wrong_op();
            
        
     
    }
    while (a != 'Q') ;

    return 0;
    
}