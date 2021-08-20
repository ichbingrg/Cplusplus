#include <iostream>

using namespace std;

double calculate_mpg(int a, int b){
	if (b==0)
		throw 0;
	return static_cast<double> (a)/b;
}



int main(){
	
	int miles, gallons;
	double miles_per_gallons;
	
	cout << "Enter the miles: " ;
	cin >> miles;
	
	cout << "Enter the gallons: ";
	cin >> gallons;
	
	try{
		miles_per_gallons = calculate_mpg(miles, gallons);
		cout << "Result: " << miles_per_gallons << endl;
	
	}
	catch (int &ex){
		cerr <<"Cannot be divided by Zero" << endl;
	}
	 
	cout << "Bye" << endl;
	
	
	
	return 0;
}