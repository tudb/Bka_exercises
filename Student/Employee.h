#pragma once
#include <iostream>
using namespace std;
class Employee{
protected:
	string m_sName;
	int m_nAge;
	int m_nSalary;
public:
	Employee();
	~Employee();
	string getName();
	int getAge();
	int getSalary();
	void setName(char* pName);
	void setAge(int nAge);
	void setSalary(int nSalary);
	virtual void import();
	virtual void display();
	virtual int caculatorSalary() = 0;
};

