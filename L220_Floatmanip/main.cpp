#include <iostream>
#include <iomanip>

int main(){
	 double num1 = 123456789.987654321;
	 double num2 = 1234.5678;
	 double num3 = 1234.0;
	 
	 std::cout << "\n----DEFAULTS-------------------------------------" << std::endl;
	 std::cout << num1 << std::endl;
	 std::cout << num2 << std::endl;
	 std::cout << num3 << std::endl;
	
	 //PRECISION 2
	 std::cout << "\n----PRECISION 2-------------------------------------" << std::endl;
	 std::cout << std::setprecision(2);
	 std::cout << num1 << std::endl;
	 std::cout << num2 << std::endl;
	 std::cout << num3 << std::endl;
	 
	 //PRECISION 5
	 std::cout << "\n----PRECISION 5-------------------------------------" << std::endl;
	 std::cout << std::setprecision(5);
	 std::cout << num1 << std::endl;
	 std::cout << num2 << std::endl;
	 std::cout << num3 << std::endl;
	 
	 //PRECISION 9
	 std::cout << "\n----PRECISION 9-------------------------------------" << std::endl;
	 std::cout << std::setprecision(9);
	 std::cout << num1 << std::endl;
	 std::cout << num2 << std::endl;
	 std::cout << num3 << std::endl;
	 
	 // FIXED PRECISION 3
	 std::cout << "\n----FIXED PRECISION 3-------------------------------------" << std::endl;
	 std::cout << std::fixed << std::setprecision(3);
	 std::cout << num1 << std::endl;
	 std::cout << num2 << std::endl;
	 std::cout << num3 << std::endl;
	 
	 // FIXED  Scientific PRECISION 3
	 std::cout << "\n----FIXED Scientific PRECISION 3-------------------------------------" << std::endl;
	 std::cout << std::fixed << std::setprecision(3) << std::scientific;
	 std::cout << num1 << std::endl;
	 std::cout << num2 << std::endl;
	 std::cout << num3 << std::endl;
	
	
	 // FIXED Capital Scientific PRECISION 3
	 std::cout << "\n----FIXED Scientific PRECISION 3-------------------------------------" << std::endl;
	 std::cout << std::fixed << std::setprecision(3) << std::scientific << std::uppercase;
	 std::cout << num1 << std::endl;
	 std::cout << num2 << std::endl;
	 std::cout << num3 << std::endl;
	
	
	 // FIXED  Scientific PRECISION 3 with sign
	 std::cout << "\n----FIXED Scientific PRECISION 3 WITH SIGN-------------------------------------" << std::endl;
	 std::cout << std::fixed << std::setprecision(3) << std::scientific << std::showpos << std::uppercase;
	 std::cout << num1 << std::endl;
	 std::cout << num2 << std::endl;
	 std::cout << num3 << std::endl;
	
	 std::cout.unsetf(std::ios::fixed| std::ios::scientific | std::ios::uppercase);
	
	 // FIXED  Scientific PRECISION 3 with sign
	 std::cout << "\n----PRECISION 10 WITH POINTS-------------------------------------" << std::endl;
	 std::cout << std::setprecision(10)  << std::showpoint;
	 std::cout << num1 << std::endl;
	 std::cout << num2 << std::endl;
	 std::cout << num3 << std::endl;
	
	return 0;
}