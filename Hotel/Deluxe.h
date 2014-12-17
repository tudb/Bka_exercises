#pragma once
#include "Premium.h"
class Deluxe : public Premium{
protected:
	float m_fFreeService;
public:
	Deluxe();
	~Deluxe();
	void import();
	void display();
	int CalculatorFree();
};

