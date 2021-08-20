#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
	char *str;
	friend bool operator==(const Mystring &lhs, const Mystring &rhs);
	friend Mystring operator+ (const Mystring &lhs, const Mystring &rhs);
	friend Mystring operator- (const Mystring &obj);
public:
	Mystring();
	~Mystring();
	Mystring(const char *s);
	Mystring (const Mystring &source);
	Mystring (Mystring &&source);
	
	
	Mystring &operator=(const Mystring &rhs);    //copy assignment
	
	Mystring &operator = (Mystring &&rhs); //move assignment
	
	//Mystring operator- () const;  member overloading	
	//
	//
	//bool operator== (const Mystring &rhs) const; operator overloading
	//
	//Mystring operator+ (const Mystring &rhs) const;
	//
	void display() const;
	int get_length() const;
	const char *get_str() const;
	

};

#endif // _MYSTRING_H_
