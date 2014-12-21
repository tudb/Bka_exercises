#pragma once
#include "customer.h"

//-----------------------------------------------------------------
// Description: Khách hàng loại B với phương thức tính tiền riêng
//-----------------------------------------------------------------

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

