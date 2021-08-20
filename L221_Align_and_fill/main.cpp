#include <iostream>
#include <iomanip>
#include <string>

void ruler(){
	std::cout << "\n1234567890123456789012345678901234567890123456789" << std::endl;
}

int main(){
	int num1 = 1234;
	double num2 = 1234.5678;
	std::string hello = "Hello";
	
	//Defaults
	std::cout << "\n--DEFAULTS--------------------------------------------------------------" << std::endl;
	ruler();
	std::cout << num1
			  << num2
			  << hello
			  << std::endl;
			  
	//Defaults-one per line
	std::cout << "\n--DEFAULTS-one per line-------------------------------------------------" << std::endl;
	ruler();
	std::cout << num1 << std::endl
			  << num2 << std::endl
			  << hello << std::endl
			  << std::endl;
	
	//set fieldwidth to 10
	std::cout << "\n--width 10 for num1----------------------------------------------------------" << std::endl;
	ruler();
	std::cout << std::setw(10) << num1 
			  << num2
			  << hello
			  << std::endl;
	
	// setfield width 10 for the first two outputs
	std::cout << "\n--width 10 for num1 and num2--------------------------------------------------------" << std::endl;
	ruler();
	std::cout << std::setw(10) << num1
			  << std::setw(10) << num2
			  << hello << std::endl;

	
	// setfield width 10 for the all three outputs
	std::cout << "\n--width 10 for all--------------------------------------------------------" << std::endl;
	ruler();
	std::cout << std::setw(10) << num1
			  << std::setw(10) << num2
			  << std::setw(10) << hello << std::endl;
	
	
	// setfield width 10 for the all three outputs on left
	std::cout << "\n--width 10 for all-on left-------------------------------------------------------" << std::endl;
	ruler();
	std::cout << std::setw(10) << std::left<< num1
			  << std::setw(10) << std::left << num2
			  << std::setw(10) << std::left <<  hello << std::endl;
	
	
	// setfield width 10 for the all three outputs on left
	std::cout << "\n--width 10 for all-on left with setfill - -------------------------------------------------------" << std::endl;
	ruler();
	std::cout << std::setfill('-')
			  << std::setw(10) << std::left<< num1
			  << std::setw(10) << std::left << num2
			  << std::setw(10) << std::left <<  hello << std::endl;
	
	
	// setfield width 10 for the all three outputs on left
	std::cout << "\n--width 10 for all-on left with different setfills -------------------------------------------------------" << std::endl;
	ruler();
	std::cout << std::setw(10) << std::left<< std::setfill('*') << num1
			  << std::setw(10) << std::left << std::setfill('#') << num2
			  << std::setw(10) << std::left << std::setfill('-') << hello 
			  << std::endl;
	
	
	return 0;
}