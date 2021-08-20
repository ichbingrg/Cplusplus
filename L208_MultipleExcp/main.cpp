#include <iostream>
#include <string>

using namespace std;


double mpg(int miles, int gallons){
	if (gallons ==0)
		throw 0;
	if (miles < 0 || gallons < 0)
		throw string{"Negative Value Error"};
	
	return static_cast<double> (miles)/(gallons);
}



int main(){
	
	int miles, gallons;
	double miles_per_gallons;
	
	cout << "Enter the miles: ";
	cin >> miles;
	cout << "Enter the gallons: ";
	cin >> gallons;
	
	try{
		miles_per_gallons = mpg(miles, gallons);
		cout << "Miles per Gallons: " << miles_per_gallons << endl;
	}
	
	catch (int &ex){
		cerr << "Canno divide by 0" << endl;
		
	}
	
	catch (string &ex){
		cerr << ex << endl;
	}
	
	catch(...){
		cerr << "Unknown error/exception" << endl; 
	}
	
	
	cout << "========== END OF PROGRAM ==========" << endl;
	
	
}