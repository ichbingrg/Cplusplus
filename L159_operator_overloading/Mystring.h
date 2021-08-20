#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>

using namespace std;

class Mystring
{
	
	char *str;
public:
	Mystring();
	~Mystring();
	Mystring(const char *s);
	Mystring (const Mystring &source);
	
	Mystring &operator=(const Mystring &rhs);    //copy assignment
	
	
	
	void display() const;
	int get_length() const;
	const char *get_str() const;
	
	

};

#endif // _MYSTRING_H_
