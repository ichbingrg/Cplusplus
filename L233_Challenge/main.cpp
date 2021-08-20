#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(){
	std::ifstream in_file;
	std::ofstream out_file;
	
	in_file.open("../text.txt");
	out_file.open("../text_copy.txt");
	
	if (!in_file.is_open()){
		std::cerr << "Cannot open file" << std::endl;
		return 0;
	}
	
	if (!out_file.is_open()){
		std::cerr << "Cannot create file" << std::endl;
		return 0;
	}
	
	std::string line;
	int a{};
	
	while(!in_file.eof()){
		a++;
		std::getline(in_file, line);
		out_file << std::setw(7) << std::left << a << line << std::endl; 
	}
	
	
	std:: cout << "COPIED" << std::endl;
	in_file.close();
	out_file.clear();
	return 0;
}