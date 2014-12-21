#pragma once
#include "ArrayStack.h"
#include <string>
using namespace std;

//-----------------------------------------------------------------
//Description: Class gồm số và các phép đổ cơ sỏ ,phân tích thành tích 
//thừa số nguyên tố
//Thuộc tính :số nguyên;
//Phương thức: Phân tích số ra thừa số nguyên tố, đổi cơ sở.
//-----------------------------------------------------------------

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

