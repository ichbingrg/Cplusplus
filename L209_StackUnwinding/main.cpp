#include <iostream>


using namespace std;

void func_a(),func_b(),func_c();


void func_a(){
	cout << "Start a " << endl;
	try{
	func_b();
	}
	catch(...){
		cout << "caught in a" << endl;
	}
	
	cout << "End a" << endl;
}

void func_b(){
	cout << "Start b " << endl;
	//try{
	  func_c();
	//  }
	//catch(...){
	//	cout << "Caught in b" << endl;
	//}
	cout << "End b" << endl;
}

void func_c(){
	cout << "Start c " << endl;
	
	
	//try{
	  throw 100;//}
	//catch (...){
	//	cout << "Caught in c" << endl;
	//}
	cout << "End c" << endl;
}



int main (){
	
	cout << "Start main" << endl;
	//try{
	func_a();
	//}
	//catch(...){
	//	cout << "Caught in main" << endl;
	//}
	
	cout << "End main" << endl;
	
}