/*
std::stack
 -last in first out
  * no iterators support
  * can be implemented as Vector, list or deque
  * 
  * push
  * pop
  * top- access top element 
  * 
  * USED AS AN ADAPTER 
  * 
  * std::stack <int> s; // deque
  * std::stack <int, std::vector <int>> s1; //vector
  * std::stack <int, std::list <int>> s2; //list
  * std::stack <int, std::deque <int>> s3; //deque
  * 
*/

/*

#include <iostream>
#include <stack>

int main(){
	
	std::stack <int> s;
	s.push(10);
	s.push(20);
	std::cout << s.top() << std::endl;
	s.push(30);
	std::cout << s.top() << std::endl;
	s.pop();
	std::cout << s.top() << std::endl;
	s.pop();
	std::cout << s.size() << std::endl;
	
	return 0;
}*/


#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>

template <typename T>
void display(std::stack <T> s){
	std::cout << "[ ";
	while (!s.empty()){
		std::cout << s.top() << " ";
		s.pop();
	}
	std::cout << "]" << std::endl;
}

int main(){
	std::stack <int> s;
	std::stack <int, std::vector <int>> s1;
	std::stack <int, std::list <int>> s2;
	std::stack <int, std::deque <int>> s3;
	
	for (int i : {1,2,3,4,5})
		s.push(i);
	display(s);
	
	s.push(100);
	display(s);
	
	s.pop();
	s.pop();
	display(s);
	
	while (!s.empty()){
		s.pop();
	}
	
	display(s);
	
	std::cout << "Size : " << s.size() << std::endl;
	
	
return 0;}