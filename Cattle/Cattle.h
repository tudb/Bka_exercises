#pragma once
#include <iostream>
using namespace std;

class Cattle{
protected : 
	int m_nAmount;
	int m_nMilk;
	int m_nChildren;
public:
	Cattle();
	~Cattle();
	int getAmount();
	void setAmount(int nAmount);
	virtual string getSound() = 0;
	virtual int getMilk() = 0;
	virtual void getChildren() = 0;
};

