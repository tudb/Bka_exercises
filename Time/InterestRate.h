#pragma once
#include <iostream>
#include "Date.h"
class InterestRate{
	int m_nAmountMoney;
	float m_fInterestMonth;
	Date m_oStart;
	Date m_oCurrent;
public:
	InterestRate(void);
	~InterestRate(void);
	void import();
	void display();
	float CalculatorInterest();
};

