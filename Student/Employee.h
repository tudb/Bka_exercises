#pragma once
#include <iostream>
using namespace std;

//-----------------------------------------------------------------
//Description: Mô tả các thông tin về nhân viên cùng các phương thức
//cần thiết, là lớp cha của các lớp nhân viên văn phòng và người sản xuất
//-----------------------------------------------------------------

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

