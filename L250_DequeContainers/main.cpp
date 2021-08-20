#include <deque>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

template <typename T>
void display( const std::deque <T> &d){
	std::cout << "[ ";
	for (auto a: d)
		std::cout << a << " ";
	std::cout << "]" << std::endl;
}

void test1(){
	std::cout << " \n== Test 1 =================================================" << std::endl;
	std::deque <int> d{1,2,3,4,5};
	display(d);
	
	d= {2,4,5,6};
	display(d);
	
	std::deque <int> d1(10,100);
	display(d1);
	
	d.at(0)=100;
	d[1]= 200;
	
	display(d);
}

void test2(){
	std::cout << " \n== Test 2 =================================================" << std::endl;
	std::deque <int> d (3,0);
	display(d);
	d.push_back(10);
	d.push_back(20);
	display(d);
	
	d.push_front (100);
	d.push_front (200);
	display(d);
	
	std::cout <<"Front: " <<  d.front() << std::endl;
	std::cout << "Back: " << d.back() << std::endl;
	std::cout << "Size: " << d.size() << std::endl;
	d.pop_front();
	d.pop_back();
	display(d);
}

void test3(){
	//insert all the odd numbers at the front and evens at the back
	std::cout << " \n== Test 3 =================================================" << std::endl;
	std::deque <int> d1{1,2,3,4,5,6,7,8,9,10};
	std::deque<int> d;
	
	for( auto a: d1){
		if (a%2==0)
			d.push_back(a);
		else
			d.push_front(a);
	}
	
	display(d);
}

void test4(){
	//ordering in push_front vs push_back
	std::cout << " \n== Test 4 =================================================" << std::endl;
	std::deque <int> d1{1,2,3,4,5,6,7,8,9,10};
	std::deque <int> d;
	
	for (auto a: d1){
		d.push_back(a);
	}
	
	display(d);
	
	d.clear();
	
	
	for (auto a: d1){
		d.push_front(a);
	}
	
	display(d);
	
}

void test5(){
	
	//std::copy
	std::cout << " \n== Test 5 =================================================" << std::endl;
	std::deque <int> d1{1,2,3,4,5,6,7,8,9,10};
	std::deque <int> d;
	
	std::copy(d1.begin(), d1.end(), std::front_inserter(d));
	display(d);
	
	d.clear();
	
	std::copy(d1.rbegin(), d1.rend(), std::front_inserter(d));
	display(d);
	
	d.clear();
	
	std::copy(d1.begin(), d1.end(), std::back_inserter(d));
	display(d);
}



int main(){
	
	test1();
	test2();
	test3();
	test4();
	test5();
	
	
	
	return 0;
}