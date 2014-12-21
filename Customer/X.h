#pragma once
#include "customer.h"

//-----------------------------------------------------------------
// Description: Khách hàng loại A với phương thức tính tiền riêng
//-----------------------------------------------------------------

class X : public Customer{
public:
	X(void);
	~X(void);
	int Calculator();
};

