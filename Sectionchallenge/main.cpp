#include <iostream>
using namespace std;

int main()

{
    cout << "FRANK'S CARPET CLEANING SERVICE" << endl << endl;
    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n\n";
    
    cout << "How many small rooms would you like cleaned? ";
    int small_rooms;
    cin >> small_rooms;
    cout << "How many large rooms would you like cleaned? ";
    int large_rooms;
    cin >> large_rooms;
    
    const double price_per_small_room (25);
    const double price_per_large_room (35);
    const double tax (0.06);
    const double valid_day (30);
    cout << "\n\nEstimate for Carpet cleaning service \n";
    cout << "Number of small rooms : " << small_rooms << endl;
    cout << "Number of large rooms : " << large_rooms << endl;
    cout << "Price per small room : $" << price_per_small_room << endl;
    cout << "Price per large room : $" << price_per_large_room << endl;
    
    double cost (small_rooms*price_per_small_room+large_rooms*price_per_large_room);
    double tax_amount (tax*cost);
    
    cout << "Cost : $" << cost << endl;
    cout << "Tax : $" << tax_amount << endl;
    
    cout << "===================================================\n";
    
    double total (cost + tax_amount);
    
    cout << "Total Estimate : $" << total << endl;
    cout << "This estimate is valid for " << valid_day << " days." << endl;
    
    return 0;
}