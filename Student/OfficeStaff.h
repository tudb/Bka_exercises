#pragma once
#include "Employee.h"
class OfficeStaff :	public Employee {
private:
	int m_nWorkDay;
public:
	OfficeStaff();
	~OfficeStaff();
	int getWorkDay();
	void setWorkDay(int nDay);
	void import();
	void display();
	int caculatorSalary();
};

