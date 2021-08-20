#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <cctype>
#include <iomanip>

class Person{
	std::string name;
	int age;
public:
	Person()=default;
	Person (std::string name, int age)
		: name(name), age(age){}
	bool operator < (const Person &rhs) const{
		return this-> age < rhs.age;
	}
	bool operator== (const Person &rhs) const{
		return ((this->name == rhs.name) && (this->age == rhs.age));
	}
};

void find_test(){
	std::cout << "\n=============================================================" << std::endl;
	
	std::vector <int> vec{1,2,3,4,5};
	
	auto loc = std::find(vec.begin(), vec.end(), 5); //auto loc = std::find(std::begin(vec), std::end(vec), 1);
	
	if (loc!= std::end(vec))
		std::cout << "Found the number:" << *loc <<  std:: endl;
	else
		std::cout << "Couldn't find the number" << std::endl;
	
	std::list <Person> players{
		{"Larry", 18},
		{"Moe", 20},
		{"Curly", 21}
	};
	

	auto loc1 = std::find(players.begin(), players.end(), Person{"Moe", 20});
	if (loc1 != players.end())
		std::cout << "Found Moe" << std::endl;
	else
		std::cout << "Moe not found" << std::endl;
	}
	
	//Count the number of elements in a container 
	void count_test(){
		std::cout << "\n===================================================" << std::endl;
		
		std::vector <int> vec {1,2,3,4,5,1,2,1};
		
		int num = std::count(vec.begin(), vec.end(), 1);
		std::cout << num << " occurrences found" << std::endl;
	}
//count the number of occurences of an element in a container using lambda exp

void count_if_test(){
	std::cout << "\n=========================================================" << std::endl;
	//count only if the element is even
	std::vector <int> vec{1,2,3,4,5,1,2,1,100};
	int num = std::count_if(vec.begin(), vec.end(), [](int x){return x%2==0;});
	std::cout << num << " even numbers found" << std::endl;
	
	num = std::count_if (vec.begin(), vec.end(), [](int x){return x%2 != 0;});
	std::cout << num << " odd numbers found" << std::endl;
	
	//how to determine if a number is larger than 5
	
	num = std:: count_if( vec.begin(), vec.end(), [](int x){return x>=5;});
	std::cout << num << " numbers are greater than 5" << std::endl;
}

//REPLACE OCCURRENCES OF ELEMENTS IN A CONTAINER
void replace_test(){
	std::cout << "\n======================================================" << std::endl;
	
	std::vector <int> vec {1,2,3,4,5,1,2,1};
	for (auto i:vec)
		std::cout << i <<" ";
	std::cout << std::endl;
	
	std::replace(vec.begin(), vec.end(), 1,100);
	for (auto i:vec)
		std::cout << i <<" ";
	std::cout << std::endl;
}

void all_of_test(){
	std::cout << "\n" << std::endl;
	std::cout << std::setw(50) << std::setfill('=') << "=" << std::endl; 
	 std::vector<int> vec1 {1,2,4,6,10,19,18,3,4,5};
	 if (std::all_of(vec1.begin(), vec1.end(), [](int x){return x> 10;}))
		 std::cout << "All of the numbers are greater than 10" << std::endl ;
		else
		 std::cout << "NOT All the elements are greater than 10 " << std::endl;
	
	if (std::all_of(vec1.begin(), vec1.end(), [](int x){return x<20;}))
		std::cout << "All of the numbers are smaller than 20" << std::endl;
	else 
		std::cout << "NOT all of the numbers are smaller than 20" << std::endl;
}

//Transform elements in a container - string in this example
void string_transform_test(){
	std::cout << "\n" << std::endl;
	std::cout << std::setw(50) << std::setfill('=') << "" << std::endl;
	std::string str1{"This is a text"};
	std::cout << "Before transform:" << str1 << std::endl;
	std::transform(str1.begin(), str1.end(),str1.begin(),::toupper);
	std::cout << "After transform: " << str1 << std::endl;
}
int main(){
	
	find_test();
	count_test();
	count_if_test();
	replace_test();
	all_of_test();
	string_transform_test();
	
	
	return 0;
}