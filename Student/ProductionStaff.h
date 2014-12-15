#pragma once
#include "Employee.h"
class ProductionStaff : public Employee{
private :
	int m_nSalaryBase;
	int m_nProductAmount;
public:
	ProductionStaff();
	~ProductionStaff();
	int getSalaryBase();
	int getProductAmount();
	void setSalaryBase(int nDay);
	void setProductAmount(int nProductAmount);
	void import();
	void display();
	int caculatorSalary();
};

