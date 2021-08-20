#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Person{
	friend std::ostream &operator<< (std::ostream &os, const Person &p1){
		os << p1.name << " : " << p1.age;
		return os;
	}
	
	std::string name;
	int age;
	
public:
	Person() = default;
	Person(std::string name, int age): name{name}, age{age} {}
	~Person() = default;
	
	bool operator< (const Person &rhs) const {
		return this -> age <rhs.age;
	}
	
	bool operator== (const Person &rhs) const {
		return ((this -> name == rhs.name) && (this -> age == rhs.age));
	}
};


template <typename T>
void display(const std::vector <T> &vec){
	std::cout << "[ " ;
	std::for_each(vec.begin(), vec.end(), [](T x){std::cout << x << " ";});
	std::cout << "]" << std::endl;
	
}

void test1(){
	std::cout << "\n= TEST 1 =======================================================" << std::endl;
	std::vector <int> vec{1,2,3,4,5};
	display(vec);
	
	vec = {2,4,5,6};
	display(vec);
	
	std::vector <int> vec1(10,100);
	display(vec1);
}
void test2(){
	std::cout << "\n= TEST 2 =======================================================" << std::endl;
	std::vector <int> vec{1,2,3,4,5};
	
	std::cout << std::endl;
	display(vec);
	std::cout << std::endl;
	std::cout << "vec size : " << vec.size() << std::endl;
	std::cout << "vec max size : " << vec.max_size() << std::endl;
	std::cout << "vec capacity : " << vec.capacity() << std::endl;
	
	vec.push_back(6);
	std::cout << std::endl;
	display(vec);
	std::cout << "vec size : " << vec.size() << std::endl;
	std::cout << "vec max size : " << vec.max_size() << std::endl;
	std::cout << "vec capacity : " << vec.capacity() << std::endl;
	
	vec.shrink_to_fit();
	std::cout << std::endl;
	display(vec);
	std::cout << "vec size : " << vec.size() << std::endl;
	std::cout << "vec max size : " << vec.max_size() << std::endl;
	std::cout << "vec capacity : " << vec.capacity() << std::endl;
	
	vec.reserve(100);
	std::cout << std::endl;
	display(vec);
	std::cout << "vec size : " << vec.size() << std::endl;
	std::cout << "vec max size : " << vec.max_size() << std::endl;
	std::cout << "vec capacity : " << vec.capacity() << std::endl;
	
	
}
void test3(){
	std::cout << "\n= TEST 3 =======================================================" << std::endl;
	std::vector <int> vec{1,2,3,4,5};
	display(vec);
	
	vec[0] = 100;
	vec.at(1)= 200;
	
	display(vec);
	
	
}

void test4(){
	std::cout << "\n= TEST 4 =======================================================" << std::endl;
	std::vector <Person> stooges;

	Person p1 {"Larry",  18};
	display(stooges);
	
	stooges.push_back(p1);
	display(stooges);
	
	stooges.push_back(Person("Moe", 25));
	display(stooges);
	
	stooges.emplace_back("Curly" , 30);
	display(stooges);
  
	
	
}
void test5(){
	std::cout << "\n= TEST 5 =======================================================" << std::endl;
	std::vector <Person> stooges {
		{"Larry" , 18},
		{"Moe" , 25},
		{"Curly", 30}
	};
	
	display(stooges);
	std::cout << "\nFront: " << stooges.front() << std::endl;
	std::cout << "Back: " << stooges.back() << std::endl;
	
	stooges.pop_back();
	display(stooges);
}
void test6(){
	std::cout << "\n= TEST 6 =======================================================" << std::endl;
	std::vector <int> vec{1,2,3,4,5};
	display(vec);
	
	vec.clear();
	display(vec);
	
	vec = {1,2,3,4,5,6,7,8,9,10};
	display(vec);
	vec.erase(vec.begin(),vec.begin()+2);
	display(vec);
	
	vec = {1,2,3,4,5,6,7,8,9,10};
	//erase all even numbers 
	std::vector <int> :: iterator it = vec.begin();
	while (it != vec.end()){
		if ( *it %2 == 0)
			vec.erase(it);
		else 
			it++;   // only increment if not erased
	}
	display(vec) ; 
	
}
void test7(){
	std::cout << "\n= TEST 7 =======================================================" << std::endl;
	std::vector <int> vec{1,2,3,4,5};
	std::vector <int> vec1{10,20,30,40,50};
	
	display(vec);
	display(vec1);
	
	std::cout << std::endl;
	vec.swap(vec1);
	display(vec);
	display(vec1);
}


void test8(){
	std::cout << "\n= TEST 8 =======================================================" << std::endl;
	std::vector <int> vec{1,21,3,40,15};
	display(vec);
	
	std::sort(vec.begin(), vec.end());
	display(vec);
	
	
	
}
void test9(){
	//std__back_inserter contruts a back insert iterator that inserts new element at the
	//end of the container it is applied tp. it is a special output iterator 
	//It#s awesone!! and very efficient
	//There is also a front_inserter we ca use with deques and lists
	//Copy one list to another usiong an iterator and back_inserter
	
	
	std::cout << "\n= TEST 9 =======================================================" << std::endl;
	std::vector <int> vec1{1,2,3,4,5};
	std::vector <int> vec2{10,20};
	
	display(vec1);
	display(vec2);
	std::cout << std::endl;
	
	std::copy (vec1.begin(), vec1.end(),std::back_inserter(vec2));
	display(vec1);
	display(vec2);
	std::cout << std::endl;
	
	//copy_if the element is even
	
	vec1 = {1,2,3,4,5,6,7,8,9,10};
	vec2 = {10,20};
	
	display (vec1);
	display(vec2);
	
	std::copy_if(vec1.begin(), vec1.end(), std::back_inserter(vec2), 
									[](int x){return x%2==0;});
	display (vec1);
	display(vec2);
	
	
	
}
void test10(){
	std::cout << "\n= TEST 10 =======================================================" << std::endl;
	//transfor over 2 vectors
	std::vector <int> vec1{1,2,3,4,5};
	std::vector <int> vec2{10,20,30,40,50};
	std::vector <int> vec3;
	std::transform(vec1.begin(),vec1.end(), vec2.begin(),std::back_inserter(vec3), [](int x, int y) {return x*y;});
	
	display(vec3);
	
	
}

void test11(){
	std::cout << "\n= TEST 11 =========================================================" << std::endl;
	std::vector <int> vec1{1,2,3,4,5,6,7,8,9,10};
	std::vector <int> vec2{100,200,300,400,500};
	
	std::vector <int> :: iterator it = std::find (vec1.begin(), vec1.end(), 5);
	if (it != vec1.end())
		vec1.insert(it , vec2.begin(), vec2.end());
	else
		std::cout << "No 5 found" << std::endl;	
	display(vec1);
}

int main(){
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
	test11();
	return 0;
}