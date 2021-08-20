#include <iostream>
#include <unordered_set>
#include <string>
#include <set>

class Person{
	friend std::ostream &operator<< (std::ostream &obj, const Person &p);
	std::string name;
	int age;
	
public:
	Person(): name {"Unknown"}, age{0} {}
	Person(std::string name, int age): name{name},age{age}{}
	~Person() = default;
	
	bool operator<(const Person &p) const {
		return this->age < p.age; 
	} 
	
	bool operator== (const Person &p) const{
		return (this->name == p.name && this->age == p.age);
	}
};

std::ostream &operator<< (std::ostream &obj, const Person &p){
	obj << p.name << " : " << p.age ;
	return obj;
}

template <typename T>
void display(const std::set <T> &s){
	std::cout << "[ " ;
	for (const T &a: s)
		std::cout << a << " ";
	std::cout << "]" << std::endl;
}

void test1(){
	std::cout << " = Test 1 ======================================================" << std::endl;
	std::set <int> nums {1,4,3,5,2};
	display(nums);
	
	std::set <int> nums2 {1,2,1,5,5,1,3,4,3};
	display(nums2);
	
	nums2.insert(0);
	nums2.insert(10);
	
	display(nums2);
	
	if (nums2.count(10))
		std::cout << "10 is in the set" << std::endl;
	else
		std::cout << "10 is not in the set" << std::endl;
		
	std::set <int>:: iterator it = nums2.find(5);
	
	if (it != nums2.end())
		std::cout << *it << " not found" << std::endl;
	else 
		std::cout << "Found : " << *it << std::endl;
	
	nums2.clear();
	
	display(nums2);

}
void test2(){
	std::cout << " = Test 2 ======================================================" << std::endl;
	
	std::set <Person> stooges {
		{"Larry",1},
		{"Moe",2},
		{"Curly",3}};
		
	display(stooges);
	stooges.insert({"James",50});
	display(stooges);
	
	stooges.emplace("Frank", 50);  //50 already exists
	display(stooges);
	
	std::set <Person> :: iterator it = stooges.find(Person{"Moe",2});
	stooges.erase(it);
	display(stooges);
	
	it = stooges.find({"XXXX",50});   //Will remove James because of 50 //uses operator<
	
	if (it != stooges.end())
		stooges.erase(it);
	
	display(stooges);
	
}
void test3(){
	std::cout << " = Test 3 ======================================================" << std::endl;
	
	std::set <std::string> s{"A", "B", "C"};
	display(s);
	
	auto result = s.emplace("D");
	display(s);
	
	std::cout << std::boolalpha;
	std::cout << "first: " << *(result.first)  << std::endl; //result is an iterator // result consists of a (<iterator>, true or false)
	std::cout << "Second: "<< result.second << std::endl;
	
	result = s.emplace("A");
	std::cout << std::endl;
	std::cout << "first: " << *(result.first)  << std::endl; //result is an iterator // result consists of a (<iterator>, true or false)
	std::cout << "Second: "<< result.second << std::endl;
	
	}



int main(){
	
	test1();
	test2();
	test3();
	
	return 0;
}