#pragma once
#include "business.h"
#include <string>

class Premium : public Business {
protected:
	int m_nFreeNight;
public:
	Premium();
	~Premium();
	void import(string sID, int nNight, int FreeNight);
	void display();
	int CalculatorFree();
	vector<Premium> getList(string sFile, int nStart, int nEnd);
};

