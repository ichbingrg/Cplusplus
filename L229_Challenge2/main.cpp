#include <iostream>clTabCtrl
#include <iomanip>
#include <fstream>

int main(){
	
	std::ifstream in_file;
	in_file.open("../smt.txt"); 
	
	if (!in_file){
		std::cerr << "ERROR OPENING FILE" << std::endl;
		return 0;
	}
	
	std::string to_find{}, words{};
	int search_count = 0, found_count = 0;
	
	std::cout << "Enter the substring to search for: ";
	std::cin >> to_find;
	
	while(!in_file.eof()){
		in_file >> words;
		search_count++;
		
		
		
			
		if (!(words.find(to_find)== std::string::npos)){
			std::cout << words << " " << std::endl;
			found_count++;}
		
	}
	
	std::cout << search_count << " words searched. " << std::endl;
	std::cout << "The substring " << to_find << " was found " << found_count << " times." << std::endl;
	
	
	in_file.close();
	return 0;
}