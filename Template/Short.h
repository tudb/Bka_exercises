#pragma once
#include <iostream>
#include <math.h>

class Short{
	int *m_pArray;
	int m_nAmount;
public:
	Short(void);
	~Short(void);
	void copy(int*, int*);
	void permute(int* , int* );
	void import();
	void sortReduce();
	void sortRaise();
	void sortEven();
};

