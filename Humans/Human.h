#pragma once
#include <iostream>
using namespace std;
class Human{
protected:
	string m_sName;
	int m_nAge;
public:
	Human();
	~Human();
	string getName();
	int getAge();
	void setName(string pName);
	void setAge(int nAge);
	virtual void import() = 0;
	virtual void display() = 0;
};

