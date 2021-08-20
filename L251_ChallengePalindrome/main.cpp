#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>

bool is_palindrome(const std::string &s){
	
	std::string t;
	
	for (char a: s){
		char b = std::toupper(a);
		t.push_back(b);
	}
	
	
	std::deque <char> d;
	std::copy_if(t.begin(),t.end(), std::back_inserter(d), [](char c){
		return isalpha(c);
	});
	
	std::deque <char> d2;
	for (char a: d){
		d2.push_front(a);
	}
	
	return (d==d2);
	
}

int main(){
	std::vector <std::string> test_strings{"a","aa","aba", "abba", "abbcbba", "ab","abc","radar","bob","ana",
				"avid diva","Amore, Roma","A Toyota's a toyota","A Santa at NASA","C++", "A man, a plan, a cat, a ham, a yak, a yam,  a hat, a canal-Panama!",
				"This is a palindrome", "palindrome"};
				
	std::cout << std::boolalpha;
	std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
	for (const auto &s: test_strings){
	std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
	}
	std::cout << std::endl;
	
	return 0;
}