#include <iostream>
#include <string>
#include <fstream>

int main(){
	
	std::ifstream in_file;
	std::ofstream out_file;
	
	in_file.open("../poem.txt");
	out_file.open("../poem_copy.txt");
	
	if (!in_file.is_open()){
		std::cerr << "File open error!!  " << std::endl;
		return 0;
	}
	if (!out_file.is_open()){
		std::cerr << "File create error!!  " << std::endl;
		return 0;
	}
	
	std::string copied_line;
	while (!in_file.eof()){
		std::getline(in_file, copied_line);
		out_file << copied_line << std::endl;
	}
	
	std::cout << "File copied" << std::endl;
	
	
	
	in_file.close();
	out_file.close();
	return 0;
}