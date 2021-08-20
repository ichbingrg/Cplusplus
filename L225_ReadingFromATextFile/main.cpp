#include <iostream>
#include <fstream>
#include <string>

int main(){
	std::ifstream in_file;
	in_file.open("../poem.txt");
	
	if (!in_file){
		std::cerr << "Failed" << std::endl;
		return 0;
	}
	//
	//std::string line;
	//while(!in_file.eof()){
	//	std::getline(in_file,line);
	//	std::cout << line << std::endl;
	//}
	
	char c;
	while (in_file.get(c)){
		std::cout << c;
	}
	std::cout << std::endl;
	
	in_file.close();
	
	return 0;
}