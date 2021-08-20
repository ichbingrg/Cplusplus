#include <iostream>
#include <iomanip>

int main(){
	
	int num = 255;
	
	//Displaying using different bases
	std::cout << "\n-------------------------------------------------------------------" << std::endl;
	std::cout << std::dec << num << std::endl;
	std::cout << std::hex << num << std::endl;
	std::cout << std::oct << num << std::endl;
	
	
	std::cout << "\n-------------------------------------------------------------------" << std::endl;
	std::cout << std::showbase; // std::cout.setf(std::ios::showbase);
	std::cout << std::dec << num << std::endl;
	std::cout << std::hex << num << std::endl;
	std::cout << std::oct << num << std::endl;
	
	
	std::cout << "\n-------------------------------------------------------------------" << std::endl;
	std::cout << std::showbase << std::uppercase; //std::cout.setf(std::ios::showbase); std::cout.setf(std::ios::uppercase);
	std::cout << std::hex << num << std::endl;
	
	int num1= -255;
	
	std::cout << "\n-------------------------------------------------------------------" << std::endl;
	std::cout << std::showpos; // std::cout.setf(std::ios::showpos);
	std::cout << std::dec << num << std::endl;
	std::cout << std::dec << num1 << std::endl;
	std::cout << std::hex << num << std::endl;
	std::cout << std::oct << num << std::endl;
	 
	 
	 // reseting to default
	 std::cout << std::resetiosflags(std::ios::basefield);
	 std::cout << std::resetiosflags(std::ios::showbase);
	 std::cout << std::resetiosflags(std::ios::showpos);
	 std::cout << std::resetiosflags(std::ios::uppercase);
	std::cout << "\n=============================================================================" << std::endl; 
	std::cout << std::dec << num << std::endl;
	std::cout << std::dec << num1 << std::endl;
	std::cout << std::hex << num << std::endl;
	std::cout << std::oct << num << std::endl;
	
	 
	 
	return 0;
}