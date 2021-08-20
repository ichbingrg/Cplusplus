#include <iostream>
#include <fstream>
#include <iomanip>

int main(){
	std::ifstream in_file;
	std::string line;
	int num;
	double total;
	
	in_file.open("../Test.txt");
	if (!in_file){
		std::cerr << "Problem opening file" << std::endl;
		return 0;
	}
	std::string lined;
	while (in_file>>line>>num>>total)  //(!in_file.eof()) or //(getline(in_file, lined))
	{
	//in_file >> line >> num >> total;
	std::cout << std::setw(10) << std::left << line  
			  << std::setw(10) << num 
			  << std::setw(10) << total << std::endl;
	}
	
	in_file.close();
	return 0;
	}
