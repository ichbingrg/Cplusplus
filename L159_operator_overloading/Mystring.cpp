#include "Mystring.h"
#include <iostream>
#include <cstring>

using namespace std;


Mystring::Mystring()     //example Mystring a;
	:str{nullptr}
{str = new char[1];
	*str = '\0';
}

Mystring::~Mystring()
{
	delete [] str;
}






Mystring::Mystring(const char *s)    // Mystring mnasm("askh");
		: str (nullptr){
			if (s==nullptr){
				str = new char{1};
				*str = '\0';
			}else{
				str = new char[strlen(s)+1];
				strcpy(str,s);
			}
		}




Mystring::Mystring (const Mystring &source)
		:str(nullptr){
			str = new char[(strlen(source.str)+1)];
			strcpy(str, source.str);
	
}



void Mystring::display() const{
	cout << str << " : " << get_length() << endl;
}



int Mystring::get_length() const{
	return strlen(str);
}




const char *Mystring::get_str() const{
	return str;
}


Mystring &Mystring::operator=(const Mystring &rhs){   // this is a function with Mystring return typ
     cout << "COPY assignment \n";
	 if (this == &rhs)
		 return *this;
	delete[] this->str;
	
	str = new char[strlen(rhs.str)+1];
	strcpy(this->str, rhs.str);
	return *this;
	 
	 
	 
	 
	 }