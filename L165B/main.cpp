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
	
	Mystring a="Apple";
	Mystring b= "Ball";
	Mystring bal = a;
	cout << boolalpha << endl;
	cout << (bal==a) << endl;
	cout << (a==b) << endl;
	
	Mystring S("Sudip");
	Mystring B("Bogo");
	
	cout << (S>B) << endl;
	return 0;
}