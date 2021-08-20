#include <iostream>
using namespace std;

int main()
{
    cout << "Enter 3 Integers: ";
    int a,b,c;
    cin >> a >> b >> c ;
    
    cout << "THE ENTERED INTEGERS ARE: " << a << " , " << b << " and " << c;
    int sum = a+b+c;
    cout << endl<< "Sum: " << sum << endl;
    double avg = static_cast<double> (sum)/3;
    cout << "Average : " << avg << endl; 
    
    
    
    return 0;
}