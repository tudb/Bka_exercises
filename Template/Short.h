#pragma once
#include <iostream>
#include <math.h>

class Short{
	int *m_pArray;
	int m_nAmount;
public:
	Short(void);
	~Short(void);
	void import();
	void sortReduce();
	void sortRaise();
};

