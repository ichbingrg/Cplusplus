#ifndef MYSTRING_H_
#define MYSTRING_H_
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
	
	//Mystring &operator=(const Mystring &rhs);    //copy assignment
	
	//Mystring &operator = (Mystring &&rhs); //move assignment
	
	Mystring operator- () const; // member overloading	
	
	
	bool operator== (const Mystring &rhs) const; //operator overloading
	
	Mystring operator+ (const Mystring &rhs) const;
	
	void display() const;
	int get_length() const;
	const char *get_str() const;
	
	

};


#endif // MYSTRING_H_
