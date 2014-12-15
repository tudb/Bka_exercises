#pragma once
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <cstddef>
#include <fstream>
#include <math.h>
using namespace std;

class Customer{
protected :
	string m_sName;
	int m_nAmount;
	int m_nPrice;
public:
	Customer(void);
	~Customer(void);
	string getName();
	int getAmount();
	int getPrice();
	void setName(string sName);
	void setAmount(int nAmount);
	void setPrice(int nPrice);
	virtual int Calculator() = 0;
};

