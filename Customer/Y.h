#pragma once
#include "customer.h"
class Y : public Customer{
private:
	int m_nIntimateYear;
public:
	Y(void);
	~Y(void);
	int getIntimateYear();
	void setIntimateYear(int nYear);
	int Calculator();
};

