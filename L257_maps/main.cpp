#include <iostream>
#include <map>
#include <set>
#include <string>

template <typename T1, typename T2>
void display(const std::map<T1, T2> &m){
	
	std::cout << "[ ";
	for (auto &elem: m)
		std::cout << elem.first << ":" << elem.second << " ";
	std::cout << "]" << std::endl;
}

void display(const std::map<std::string, std::set<int>> &m){
	std::cout << "[ ";
	for (auto &i: m){
		std::cout << i.first << ":";
		std::cout << "( ";
		for (auto &j: i.second){
			std::cout << j << " ";
		}
		std::cout << ") ";
	}
	std::cout << "]" << std::endl;
}


void test1(){
	std::cout << "== TEST 1 ==================================================" << std::endl;
	std::map <std::string, int > m{
		{"Larry", 3},
		{"Curly",2},
		{"Moe", 1}
	};
	display(m);
	
	m.insert(std::pair <std::string, int> ("Anna", 10));
	display(m);
	
	m.insert(std::make_pair("Joe",5));
	display(m);
	
	m["Frank"] = 18;
	display(m);
	
	m["Frank"] = 28;
	display(m);
	
	m.erase("Frank");
	display(m);
	
	std::cout << "Count for Joe: " << m.count("Joe") << std::endl;
	std::cout << "Count for Frank: " << m.count("Frank") << std::endl;
	
	std::map <std::string, int>:: iterator it = m.find("Larry");

	if (it != m.end())
		std::cout << "Found: " << it->first << ":" << it ->second << std::endl;
	else
		std::cout << "Not found" << std::endl;
		
	m.clear();
	display(m);
	std::cout << std::endl;
	
}

void test2(){
	std::cout << "== TEST 2 ==================================================" << std::endl;
	std::map <std::string, std::set<int>> grades{
		{"Larry", {100,90}},
		{"Moe",{94}},
		{"Curly",{80,90,100}}
	};
	
	display(grades);
	
	grades["Larry"].insert(95);
	
	display(grades);
	
	std::map <std::string, std::set <int>>::iterator it = grades.find("Moe");
	if (it != grades.end())
		(*it).second.insert(1000);
		// or //it -> second.insert(1000);
	display(grades);
	std::cout << std::endl;
}

int main(){
	test1();
	test2();
	return 0;
}