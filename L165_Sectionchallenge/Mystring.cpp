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
	Mystring Mystring::operator- () const{
		char *s= new char [std::strlen(str)+1];
		std::strcpy(s, str);
		for (size_t a=0; a < std::strlen(s); ++a)
			s[a] = std::tolower(s[a]);
		Mystring b {s};
		delete [] s;
		return b;
	}
	
	bool Mystring::operator== (const Mystring &source) const{
		return ((std::strcmp(str,source.str))==0);
	}
	bool Mystring::operator!= (const Mystring &source) const{
		return !((std::strcmp(str,source.str))==0);
	}
	
	bool Mystring::operator< (const Mystring &source) const{
		return ((strcmp(str, source.str))==-1);
	}
	bool Mystring::operator> (const Mystring &source) const{
		return ((strcmp(str,source.str))==1);
	}
	
	Mystring Mystring::operator+ (const Mystring &source) const{
		size_t val = strlen(this->str)+strlen(source.str)+1;
		char *a = new char [val];
		strcpy(a, this->str);
		strcat(a,source.str);
		Mystring result{a};
		delete [] a;
		return result;
	}
	
	Mystring &Mystring::operator+= (const Mystring &source){
		*this = *this + source;
		return *this;
	}
	Mystring Mystring::operator* (const size_t a) const{
		Mystring temp;
		for (size_t i=1; i < a; ++i){
			temp = temp + *this;
		}
		return temp;
		
	}
	
	Mystring &Mystring::operator*=(const size_t a){
		*this = (*this)*a;
		return *this;
		
	}
	
	Mystring &Mystring::operator++ (){
		
		for (size_t a=0; a < std::strlen(str); ++a)
			str[a] = std::toupper(str[a]);
		return *this;
		
	}
	Mystring Mystring::operator++ (int){
		Mystring temp{str};
		operator++ ();
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

