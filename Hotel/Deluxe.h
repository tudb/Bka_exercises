#pragma once
#include "Premium.h"
#include <string>

class Deluxe : public Premium{
protected:
	float m_fFreeService;
public:
	Deluxe();
	~Deluxe();
	void import(string sID, int nAmount,int nFreeNight, float fFreeService);
	void display();
	int CalculatorFree();
	vector<Deluxe> getList(string sFile, int nStart, int nEnd);
};

