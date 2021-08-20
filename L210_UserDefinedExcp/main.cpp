#include <iostream>
#include <string>

using namespace std;

class DividedByZero{};
class NegativeValue{};


double mpg(int a, int b){
	if (b==0)
		throw DividedByZero();
	if (a<0 || b < 0)
		throw NegativeValue();
	
	return static_cast<double> (a)/b;
}


int main(){
	int miles, gallons;
	double miles_per_gallons;
	
	cout << "Enter Miles and Gallons respectively: ";
	cin >> miles  >> gallons;
	
	try{
		miles_per_gallons = mpg(miles, gallons);
		cout << "Result :" << miles_per_gallons << endl;
	}
	
	catch (DividedByZero &er){
		cerr << "Cannot divide by Zero" << endl;
	}
	
	catch (NegativeValue &er){
		cerr << "One of the values is negative" << endl;
	}
	
	cout << "=========== END OF PROGRAM ================" << endl;
	
	
	return 0;
}