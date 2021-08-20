#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>
#include <cstring>

using namespace std;

class Mystring
{
	friend std::ostream &operator<< (ostream &out,const Mystring &org);
	friend std::istream &operator >> (istream &in, Mystring &org); 
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
	const char *get_str() const {return str;}
	
	Mystring operator- () const;
	
	bool operator== (const Mystring &source) const;
	bool operator!= (const Mystring &source) const;
	
	bool operator< (const Mystring &source) const;
	bool operator> (const Mystring &source) const;
	
	Mystring operator+ (const Mystring &source) const;
	
	Mystring &operator+= (const Mystring &source);
	Mystring operator* (const size_t a) const;
	
	Mystring &operator*=(const size_t a);
	
	Mystring &operator++ ();
	Mystring operator++ (int);
	
	
	
};

#endif // _MYSTRING_H_
