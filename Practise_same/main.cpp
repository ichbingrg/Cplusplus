#include <iostream>
#include <array>
#include <algorithm>
#include <set>
#include <iomanip>


bool same (std::vector<int> arr1, std::vector <int> arr2){
	std::set <int> set1;
	set1.insert(arr1.begin(), arr1.end());
	
	std::set <int> set2;
	set2.insert(arr2.begin(),arr2.end());
	
	return (set1.size() == set2.size());
}


int main() {
on	
	std::vector<int> arr1 = {1,2,3,3,3,3};
	std::vector <int> arr2 = {1,2,3 };
	
	
	std::cout << std::boolalpha << same(arr1,arr2) << std::endl;

	return 0;
}