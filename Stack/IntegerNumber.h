#pragma once
#include "ArrayStack.h"
#include <string>
using namespace std;

class IntegerNumber{
private :
	int m_nNumber;
public:
	IntegerNumber();
	~IntegerNumber();
	void import();
	int getNumber();
	void setNumber(int nNumber);
	bool checkPrime(int nNumber);
	int analyseToPrime(ArrayStack *arrayStack, int nNumber);
	ArrayStack* saveRemainder(int byBase, int nNumber);
	string changeBase(int byBase, int nNumber);
};

