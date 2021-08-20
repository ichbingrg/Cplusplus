#include <iostream>
#include <queue>
#include <string>

class Person{
	friend std::ostream &operator<< (std::ostream &os, const Person &p);
	std::string name;
	int age;
public:
	Person():name("Unknown"), age(0) {}
	Person(std::string name, int age):name(name),age(age){}
	~Person() = default;
	bool operator< (const Person &p) const{
		return this->age < p.age;
	}
	bool operator== (const Person &p) const{
		return (this->name == p.name && this->age == p.age);
	}
};

std::ostream &operator<< (std::ostream &os, const Person &p){
	os << p.name << " : " << p.age ;
	return os;
}

template <typename T>
void display(std::priority_queue<T> pq){
	std::cout << "[ ";
	while (!pq.empty()){
		std::cout << pq.top() << " ";
		pq.pop();
	}
	std::cout << "]" << std::endl;
}


void test1(){
	std::cout << "= TEST 1 ==================================================" << std::endl;
	
	std::priority_queue <int> pq;
	for (int i: {3,5,7,12,23,12,4,100,0,3,5,7})
		pq.push(i);
		
	std::cout << "Size: " << pq.size() << std::endl;
	std::cout << "Top: " << pq.top() << std::endl;
	
	display(pq);
	
	pq.pop();
	
	display(pq);
}

void test2(){
	std::cout << "= TEST 2 ==================================================" << std::endl;
	
	std::priority_queue<Person> pq;
	pq.push(Person("A",12));
	pq.push(Person("B",23));
	pq.push(Person("C",34));
	pq.push(Person("D",54));
	pq.push(Person("E",3));
	pq.push(Person("F",2));
	pq.push(Person("G",10));
	
	display(pq);
}



int main(){
	
	test1();
	test2();
	
	return 0;
}