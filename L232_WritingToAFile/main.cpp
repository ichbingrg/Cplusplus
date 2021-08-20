#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main(){
	//std::ifstream in_file;
	std::ofstream out_file;
	out_file.open("../op.txt",std::ios::app);
	
	if (!out_file){
		std::cerr << "File craete error" << std::endl;
		return 1;
	}
	std::string line;
	std::cout << "Enter your line: " ;
	getline(std::cin, line);
	
	out_file << line << std::endl;
	
	
	
	
	
	return 0;
}