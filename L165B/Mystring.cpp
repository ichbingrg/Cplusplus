#include "Mystring.h"
#include <iostream> 


using namespace std;
	Mystring::Mystring()
			: str{nullptr}{
				str= new char[1];
				str='\0';
			}
	Mystring::Mystring(const char *s)
			: str(nullptr){
				if (s==nullptr)
					Mystring();
				else{
				str = new char [std::strlen(s)+1];
				std::strcpy(str,s);}
				
			}
	Mystring::Mystring (const Mystring &source)
			: str(nullptr){
				str = new char [std::strlen(source.str)+1];
				std::strcpy(str, source.str);
				
		
	}
	Mystring::Mystring (const Mystring &&source)
			:str(nullptr){
				str= new char[std::strlen(source.str)+1];
				std::strcpy(str,source.str);
				delete [] source.str;
		
	}
	Mystring::~Mystring(){
		delete [] str;
	}
	
	Mystring &Mystring::operator= (const Mystring &source){
		if (this == &source)
			return *this;
		delete [] str;
		str = new char[std::strlen(source.str)+1];
		std::strcpy(str,source.str);
		return *this;
	}
	Mystring &Mystring::operator= (Mystring &&source){
		if (this == &source)
			return *this;
		delete [] str;
		str = source.str;
		delete [] source.str; //source.str= nullptr;
		return *this;
	}
	
	void Mystring::display() const {
		cout << endl << str << endl;
	}	
	Mystring operator- (const Mystring &obj){
		char *s= new char [std::strlen(obj.str)+1];
		std::strcpy(s, obj.str);
		for (size_t a=0; a < std::strlen(s); ++a)
			s[a] = std::tolower(s[a]);
		Mystring b {s};
		delete [] s;
		return b;
	}
	
	bool operator== (const Mystring &lhs, const Mystring &rhs) {
		return ((std::strcmp(lhs.str,rhs.str))==0);
	}
	bool operator!= (const Mystring &lhs, const Mystring &rhs) {
		return !(lhs.str==rhs.str);
	}
	
	bool operator< (const Mystring &lhs, const Mystring &rhs){
		return ((strcmp(lhs.str, rhs.str))==1);
	}
	bool operator> (const Mystring &lhs, const Mystring &rhs){
		return !(lhs.str < rhs.str);
	}
	
	Mystring operator+ (const Mystring &lhs, const Mystring &rhs){
		size_t val = strlen(lhs.str)+strlen(rhs.str)+1;
		char *a = new char [val];
		strcpy(a, lhs.str);
		strcat(a,rhs.str);
		Mystring result{a};
		delete [] a;
		return result;
	}
	
	Mystring &operator+= (Mystring &lhs, const Mystring &rhs){
		size_t val = strlen(lhs.str)+strlen(rhs.str)+1;
		char *a = new char [val];
		strcpy(a, lhs.str);
		strcat(a,rhs.str);
		delete[]lhs.str;
		lhs.str = new char [strlen(a)+1];
		strcpy(lhs.str,a);
		delete [] a;
		return lhs;
	}
	Mystring operator* (const Mystring &lhs, const size_t a){
		char *temp = new char[(strlen(lhs.str)*a)+1];
		strcpy(temp, lhs.str);
		for (size_t i=1; i < a; ++i){
			strcat(temp,lhs.str);
		}
		Mystring end{temp};
		return end;
		
	}
	
	Mystring &operator*=(Mystring &lhs, const size_t a){
		char *temp = new char[(strlen(lhs.str)*a)+1];
		strcpy(temp, lhs.str);
		for (size_t i=1; i < a; ++i){
			strcat(temp,lhs.str);
		}
		delete [] lhs.str;
		lhs.str = new char[strlen(temp)+1];
		
		strcpy(lhs.str, temp);
		
		return lhs;
		
	}
	
	Mystring &operator++ (Mystring &obj) {
		char *s= new char [std::strlen(obj.str)+1];
		std::strcpy(s, obj.str);
		for (size_t a=0; a < std::strlen(s); ++a)
			s[a] = std::toupper(s[a]);
		delete [] obj.str;
		strcpy(obj.str, s);
		delete [] s;
		return obj;
		
	}
	Mystring operator++ (Mystring &org, int a){
		Mystring temp{org.str};
		++ (org);
		return temp;
	}
	
	std::ostream &operator<< (std::ostream &out,const Mystring &org){
		out << org.str;
		return out;
		
	}
	std:: istream &operator >> (std::istream &in, Mystring &org){
		char *a = new char[1000];
		in >>  a;
		org = Mystring(a);
		delete [] a;
		return in;
	}

