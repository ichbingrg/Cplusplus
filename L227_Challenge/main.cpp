#include <iostream>
#include <fstream>
#include <iomanip>


void print_header(){
	std::cout << std::setw(15) << std::left <<"Student"
			  << std::setw(10) << std::right << "Score"<< std::endl;
	std::cout << std::setw(25) << std::setfill('-') << "" << std::endl;
	std::cout << std::setfill(' ') << std::left;
	}

void proper_print( std::string a,int correct){
	std::cout << std::setw(15) << std::left <<a
			  << std::setw(10) << std::right << correct<< std::endl;
	
}



int check_response(const std::string a,const std::string b){
	int correct=0;
	for (size_t i = 0; i < a.size() ; ++i){
		if (a[i]==b[i])
			correct++;
	}
	return correct;
}

double calculate_avg(int name_counter, int total_scored){
	return static_cast <double> (total_scored)/name_counter;
}

void print_footer(double a){
	std::cout << std::setw(25) << std::setfill('-') << "" << std::endl;
	std::cout << std::setfill(' ') ;
	std::cout << std::setw(15) << std::left <<"Average score"
			  << std::setw(10) << std::right << std::fixed << std::setprecision(1)<< a<< std::endl;
	
	
}
int main(){
	std::ifstream in_file;
	in_file.open("../responses.txt");
	
	if (!in_file){
		std::cerr << "ERROR OPENING FILE" << std::endl;
		return 0;
	}
	
	print_header();
	
	std::string right_answer;
	std::getline(in_file, right_answer);
	std::string name, response;
	int name_counter=0;
	int total_scored =0;
	
	while(!in_file.eof()){
		in_file >> name >> response;
		int correct = check_response(right_answer, response);
		proper_print(name, correct);
		name_counter++;
		total_scored += correct;
		
	}
	if (name_counter==0){
		std::cerr << "Cannot divide by zero" << std::endl;
		return 0;
	}
	double avg = calculate_avg(name_counter, total_scored);
	
	print_footer(avg);
	
	in_file.close();
	
	return 0;
}