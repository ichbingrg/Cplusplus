#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << "noboolalpha - default (10==10): " << (10==10) << endl;
	cout << "noboolalpha - default (10==20): " << (10==20) << endl;
	
	
	// BOOL ALPHA
	cout << boolalpha;
	cout << "boolalpha (10==10): " << (10==10) << endl;
	cout << "boolalpha (10==20): " << (10==20) << endl;
	
	//EFFECT REMAINS
	cout << "boolalpha (10==10): " << (10==10) << endl;
	cout << "boolalpha (10==20): " << (10==20) << endl;
	
	//toggle to 1/0
	cout << noboolalpha;
	cout << "noboolalpha (10==10): " << (10==10) << endl;
	cout << "noboolalpha (10==20): " << (10==20) << endl;
	
	//set using setf method
	cout.setf(std::ios::boolalpha);
	cout << "boolalpha (10==10): " << (10==10) << endl;
	cout << "boolalpha (10==20): " << (10==20) << endl;
	
	//resting using method
	cout << std::resetiosflags(std::ios::boolalpha);
	cout << "boolalpha (10==10): " << (10==10) << endl;
	cout << "boolalpha (10==20): " << (10==20) << endl;
	
	 
	
	
	
	
	return 0;
}