#include <iostream>
#include <string>
#include <array>
#include <iomanip>
#include <algorithm>

void display(const std::array<int,5> &r){
	std::cout << "[ ";
	for (auto a: r)
		std::cout << a  << " ";
	std::cout << "]";
	std::cout << std::endl;
}


test1(){
	std::cout << std::setw(40) << std::left << std::setfill('=') << "Test 1 " <<std::endl;
	std::array <int, 5> arr1{1,2,3,4,5};
	std::array <int,5> arr2;
	
	display(arr1);
	display(arr2);
	
	arr2= {10,20,30,40,50};
	
	display(arr1);
	display(arr2);
	
	std::cout << "Size of arr1 : " << arr1.size() << std::endl;
	std::cout << "Size of arr2 : " << arr2.size() << std::endl;
	
	arr1[0] = 1000;
	arr1.at(1) = 2000;
	display(arr1);
	
	std::cout << "Front of arr2: " << arr2.front() << std::endl;
	std::cout << "Back of arr2: " << arr2.back() << std::endl; //*(arr2.end()-1) << std::endl;
	
	
	
}

test2(){
	
	std::cout << std::setw(40) << std::left << std::setfill('=') << "Test 2 " <<std::endl;
	std::array <int, 5> arr1{1,2,3,4,5};
	std::array <int,5> arr2{10,20,30,40,50};
	
	display(arr1);
	display(arr2);
	
	arr1.fill(0);
	display(arr1);
	display(arr2);
	
	arr1.swap(arr2);
	display(arr1);
	display(arr2);
}
test3(){
	
	std::cout << std::setw(40) << std::left << std::setfill('=') << "Test 3 " <<std::endl;
	std::array <int, 5> arr1{1,2,3,4,5};
	
	int *ptr = arr1.data();
	std::cout << ptr << std::endl;
	*ptr = 1000;
	display(arr1);
	
}
test4(){
	std::cout << std::setw(40) << std::left << std::setfill('=') << "Test 4 " <<std::endl;
	std::array <int,5> arr1{2,1,3,5,4};
	display(arr1);
	
	std::sort(arr1.begin(), arr1.end());
	display(arr1);
	}
test5(){
	std::cout << std::setw(40) << std::left << std::setfill('=') << "Test 5 " <<std::endl;
	std::array <int, 5> arr1{2,1,3,5,4};
	
	std::array<int,5>:: iterator min_num = std::min_element(arr1.begin(), arr1.end());
	std::array<int, 5> :: iterator max_num= std::max_element(arr1.begin(), arr1.end());
	std::cout << "min :" << *min_num << " , max : " << *max_num << std::endl;
	
	}
test6(){
	std::cout << std::setw(40) << std::left << std::setfill('=') << "Test 6 " <<std::endl;
	std::array <int,5> arr1 {1,3,3,2,5};
	
	std::array <int,5>::iterator adjacent = std::adjacent_find(arr1.begin(), arr1.end());
	if (adjacent != arr1.end())
		std::cout << "Adjacent element found with a value: " << *adjacent << std::endl;
	else
		std::cout << "No adjacent elemet found" << std::endl;
	
	}
test7(){
	std::cout << std::endl<<  std::setw(40) << std::left << std::setfill('=') << "Test 7 " <<std::endl;
	std::array <int,5> arr1{1,2,3,4,5};
	
	int sum = std::accumulate(arr1.begin(), arr1.end(),0);
	std::cout << "Sum of the elements in arr1 is: " << sum << std::endl;
	
	
	}
test8(){
	std::cout <<std::endl<<  std::setw(40) << std::left << std::setfill('=') << "Test 8 " <<std::endl;
	std::array <int, 10> arr1{1,2,3,1,2,3,3,3,3,3};
	
	int count = std::count(arr1.begin(), arr1.end(), 3);
	std::cout << "Found 3: " << count << " times" << std::endl;
	}
test9(){
	
	std::cout <<std::endl<<  std::setw(40) << std::left << std::setfill('=') << "Test 9 " <<std::endl;
	std::array <int,10> arr1 {1,2,3,50,60,70,80,90,400,350};
	//find how many numbers are between 10 and 200 -> 50,60,70,80,90
	
	int count = std::count_if(arr1.begin(), arr1.end(), [](int x){return ((x<200)&&(x>10));});
	std::cout << "Found : " << count << "matches" << std::endl;
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
	
	
	return 0;
}
