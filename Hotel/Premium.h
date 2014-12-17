#pragma once
#include "business.h"
class Premium : public Business {
protected:
	int m_nFreeNight;
public:
	Premium();
	~Premium();
	void import();
	void display();
	int CalculatorFree();
};

