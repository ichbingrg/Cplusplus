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

//
//Mystring Mystring ::operator- () const{
//	char *buff = new char (strlen(str)+1);
//	strcpy(buff, str);
//	
//	for (size_t i =0; i< strlen(buff); ++i){
//		buff[i] = tolower(buff[i]);
//	}
//	Mystring temp {buff};   // function return type : Mystring
//	delete [] buff;
//	
//	return temp;
//
//}
//
//bool Mystring::operator== (const Mystring &rhs) const{
//	if (strcmp(str,rhs.str)==0)
//		return true;
//	else
//		return false;
//}
//
//Mystring Mystring::operator+ (const Mystring &rhs) const{
//	size_t buff_size= strlen(str)+strlen(rhs.str) +1;
//	char *buff = new char[buff_size];
//	
//	strcpy(buff,str);
//	strcat(buff, rhs.str);
//	
//	Mystring temp{buff};
//	
//	delete [] buff;
//	return temp;
//}






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


Mystring::Mystring (Mystring &&source)
		:str(nullptr){
	this->str = new char[ strlen(source.str)+1];
	strcpy(str, source.str);
	delete [] source.str;
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
	 
	 
Mystring &Mystring::operator = (Mystring &&rhs){
	cout << endl << "MOVE assignment "<< endl;
	if (this==&rhs)
		return *this;
	delete [] this -> str;
	
	str = rhs.str;
	rhs.str=nullptr;
	
	return *this;
	
	
	}
	
	
bool operator==(const Mystring &lhs, const Mystring &rhs){
	return (strcmp(lhs.str, rhs.str)==0);
}
Mystring operator+ (const Mystring &lhs, const Mystring &rhs){
	size_t buff_size = strlen(lhs.str)+strlen(rhs.str) +1;
	char *buff = new char [buff_size];
	strcpy(buff,lhs.str);
	strcat(buff,rhs.str);
	Mystring temp{buff};
	
	delete [] buff;
	
	return temp;
		
	}

Mystring operator- (const Mystring &obj){
	size_t buff_size = strlen(obj.str) +1;
	char *buff = new char[buff_size];
	strcpy(buff, obj.str);
	
	for (size_t i=0; i < buff_size; ++i)
		buff[i] = tolower(buff[i]);
	Mystring temp{buff};
	delete [] buff;
	
	return temp;
}