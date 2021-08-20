#ifndef INSUFFICIENTFUNDEXCEPT_H
#define INSUFFICIENTFUNDEXCEPT_H
#include <iostream>

using namespace std;

class InsufficientFundExcept: public exception
{
public:
	InsufficientFundExcept() noexcept = default;
	~InsufficientFundExcept() = default;
	
	virtual const char *what() const noexcept {
		return "Insufficient Funds" ;
	}

};

#endif // INSUFFICIENTFUNDEXCEPT_H
