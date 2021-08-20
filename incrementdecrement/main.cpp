/* Increment operator ++
 * Decrement opereator --
 * 
 * increments or decrements its operand by 1
 * Can be used with integers,floating and pointer
 * 
 * Prefix ++num
 * Suffix num++
 * 
 * Don't overuse this operator
 * 
 */

#include <iostream>
using namespace std;

int main()

{
    int counter = 10;
    int result;
    
    //Example 1: Simple increment
    
    cout << "Counter : " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter : " << counter << endl;
    
    counter++;
    cout << "Counter : " << counter << endl;
    
    ++counter ;
    cout << "Counter : " << counter << endl;
    
    // Example 2 : Preincrement
    counter = 10; result =0;
    
    cout << "\nCounter : " << counter << endl;
    
    result = ++counter ;
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;
    
    // Exmaple 3 : Postincrement
    counter = 10;
    result = 0;
    
    cout << "\nCounter : " << counter << endl;
    result = counter++;
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;
    
    // Example 4
    
    counter = 10; result =0;
    
    cout << "\nCounter : " << counter << endl;
    
    result = ++counter + 10; //pre-increment
    
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;
    
    // Example 5
    
    counter = 10; result = 0;
    
    cout << "\nCounter : " << counter << endl;
    
    result = counter++ + 10;
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;
    
    
    

 



    
    return 0;
}