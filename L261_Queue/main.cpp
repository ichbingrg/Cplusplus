/*
 * std::queue
 * FIFO
 * implemented as Adapter 
 * 
 * Elements are pushed at the back and poped from the front
 * 
 * No ITERATORS!!
 * 
 * *push- insert at back
 * *pop- remove from front
 * 
 * front- object at the front
 * back - object at the back
 * 
 * empty- bool
 * size - ...

 
 * std::queue<int> q; //deque
 * std::queue <int, std::list <int>> q2;  //vector
 * std::queue <int, std::deque <int>> q3;  //deque
*/

#include <iostream>
#include <queue>
#include <string>

template <typename T>
void display (std::queue <T> q){
	std::cout << "[ ";
	while(!q.empty()){
		std::cout << q.front() << " ";
		q.pop();
	}
	std::cout << "]" << std::endl;
}

int main(){
	
	std::queue <int> q;
	
	for (int a:{1,2,3,4,5})
		q.push(a);
	
	display(q);
	
	std::cout <<"Front: " << q.front() << std::endl;
	std::cout << "Back: " << q.back() << std::endl;
	
	q.push(100);
	display(q);
	
	q.pop();
	q.pop();
	display(q);
	
	while (!q.empty())
		q.pop();
	
	display(q);
	
	std::cout << "Size : " << q.size() << std::endl;
	
	q.push(10);
	q.push(100);
	q.push(1000);
	
	display(q);
	
	std::cout << "Front : " << q.front() << std::endl;
	std::cout << "Back: " << q.back() << std::endl;
	
	q.front()=5;
	q.back() =5000;
	
	display(q);
	
	
	std::cout << "Front : " << q.front() << std::endl;
	std::cout << "Back: " << q.back() << std::endl;
	
	return 0;
}