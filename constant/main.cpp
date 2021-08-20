/*
 * Frank's Carpet Cleaning Service
 * Charges $30 per room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 * 
 * Prompt the user for the number of rooms they would like cleaned
 * and provide an estimate such as:
 
Estimate for the carpet cleaning service:
 * Number of rooms: 2
 * Price per room : $30
 * Cost: $60
 * Tax : $3.6
 * =================================================================
 * Total estimate: $63.6
 * This estimate is valid for 3 days
 * 
 * Pseudocode:
 * 
 *   Prompt the user to enter the number of rooms
 *   Display number of rooms
 *   Display price per room

Display cost: (number of rooms*price per room)
Display Tax: number of rooms*price per room*tax rate
Display total estimate:  (number of rooms*price per room)+(number of rooms*price per room*tax rate)
Display estimate expiration time
*/

#include <iostream>
using namespace std;

//#define price_per_room 30
//#define tax 0.06
//#define valid_day 30

int main()

{
    cout << "Hello, this is Franks Carpet Cleaning Service" << endl;
    cout << endl << "How many rooms would you like cleaned ? ";
    int rooms(0);
    cin >> rooms;
    
    const double price_per_room (32.50);
    const double tax (0.06);
    const valid_day (30);
    cout << "\nESTIMATE FOR CARPET CLEANING SERVICE " << endl;
    cout << "Number of rooms: " << rooms << endl;
    cout << "Price per room : $" << price_per_room << endl;
    cout << "Cost           : $" << price_per_room*rooms << endl;
    cout << "Tax            : $" << price_per_room * rooms * tax << endl;
    cout << "======================================================" << endl;
    cout << "Total Estimate : $" << (price_per_room * rooms) + (price_per_room * rooms * tax) << endl;
    cout << "This estimate is valid for " << valid_day << "days" << endl;
    
    
    
    return 0;
}