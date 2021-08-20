#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>
#include <cstring>

using namespace std;

class Mystring
{
	friend std::ostream &operator<< (ostream &out,const Mystring &org);
	friend std::istream &operator >> (istream &in, Mystring &org); 
	friend Mystring operator- (const Mystring &obj);
	
	friend bool operator== (const Mystring &lhs, const Mystring &rhs) ;
	friend bool operator!= (const Mystring &lhs, const Mystring &rhs) ;
	
	friend bool operator< (const Mystring &lhs, const Mystring &rhs) ;
	friend bool operator> (const Mystring &lhs, const Mystring &rhs) ;
	
	friend Mystring operator+ (const Mystring &lhs, const Mystring &rhs) ;
	friend Mystring &operator+= (Mystring &lhs, const Mystring &rhs);
	
	friend Mystring operator* (const Mystring &lhs, const size_t a) ;
	friend Mystring &operator*=(Mystring &lhs, const size_t a);
	
	friend Mystring &operator++ (Mystring &org);
	friend Mystring operator++ (Mystring &org, int);
	
	
	char *str;
public:
	Mystring();
	Mystring(const char *s);
	Mystring (const Mystring &source);
	Mystring (const Mystring &&source);
	~Mystring();
	
	Mystring &operator= (const Mystring &source);
	Mystring &operator= (Mystring &&source);
	
	void display() const ;
	int get_length() const{return strlen(str);}
	char *get_str() {return str;}
	
	
	
};

#endif // _MYSTRING_H_
