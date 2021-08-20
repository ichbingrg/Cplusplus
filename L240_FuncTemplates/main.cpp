#include <iostream>
#include <string>

template <typename T>
T min (T a,T b){
	return (a<b) ? a:b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b){
	std::cout << a << " " << b << std::endl;
}

struct Person{
	std::string name;
	int age;
	
	bool operator< (const Person &a) const{
		return ((this -> age) < (a.age));
	}
};

std::ostream &operator<< (std::ostream &os, const Person &obj){
		os << obj.name;
		return os;
	}


template <typename T>
void my_swap(T &a , T &b){
	T temp = a;
	a=b;
	b= temp;
}
	

int main(){
	int x =100, y=200;
	my_swap(x,y);
	
	func(x,y);
	
	
	Person p1{"Curly", 50};
	Person p2{"Moe", 30};
	
	
	
	
	
	Person p3 = min(p1,p2);
	std::cout << p3<< " is younger" << std::endl;
	
	func(p1,p2);
	
	my_swap(p1,p2);
	func(p1,p2);
	
	
	std::cout << min<int> (2,3) << std::endl;
	std::cout << min(2,3) << std::endl;
	std::cout << min('A','B') << std::endl;
	std::cout << min(12.5,9.2) << std::endl;
	std::cout << min(5+2*2,7+40) << std::endl;
	
	std::cout << "---------------------------------------------------" << std::endl;
	
	func(10,20);
	func('A',12.4);
	
	
	
	
	return 0;
}