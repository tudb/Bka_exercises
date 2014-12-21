#pragma once
#include "customer.h"

//-----------------------------------------------------------------
// Description: Khách hàng loại C với phương thức tính tiền riêng
//-----------------------------------------------------------------

class Z : public Customer{
public:
	Z(void);
	~Z(void);
	int Calculator();
};

