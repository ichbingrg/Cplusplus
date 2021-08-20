/*
- 		-unary minus,returns the lowercase of the obj. string

==		-returns true if the two strings are equal

!		-returns true if the strings are not equal

< 		-returns true if lhs is lexically smaller than rhs

>		-returns true if lhs is lexically larger than rhs

+		concatenation

+=		s1+=s2 <=> s1 = s1+s2

*		repeat the same n times.
		s1 = s2*3
		
*=		s1*=3 <=> s1= s1*3

Mystring &operator++(){  //preinc
 return *this;
	}
	
Mystring operator++(int){ //post inc
	Mystring temp{*this};
	operator++();
	 return temp;
	 }


*/


#include <iostream>
#include "Mystring.h"

using namespace std;
int main(){
	
	cout << boolalpha << endl;
	Mystring a {"frank"};
	Mystring b {"frank"};
	
	cout << (a==b) << endl;
	cout << (a!=b) << endl;
	
	b= "george";
	cout << (a==b) << endl;
	cout << (a!=b) << endl;
	cout << (a<b) << endl;
	cout << (a>b) << endl;
	
	Mystring s1 {"FRANK"};
	s1= -s1;
	cout << s1 << endl;
	
	s1 += "--------";
	cout << s1 << endl;
	
	Mystring s2{"12345"};
	s1=s2*3;
	cout << s1 << endl;
	
	Mystring s3{"abcdef"};
	s3 *= 5;
	cout << s3 << endl;
	
	Mystring s= "Frank";
	++s;
	cout << s << endl;
	
	s=-s;
	cout << s << endl;
	
	Mystring result;
	result = ++s;
	cout << s << endl;
	cout << result << endl;
	
	s="Frank";
	s++;
	cout << s << endl;
	
	s=-s;
	cout << s << endl;
	result = s++;
	cout << s << endl;
	cout << result << endl;
	
	return 0;
}