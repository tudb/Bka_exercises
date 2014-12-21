#pragma once
#include <math.h>
#include <iostream>

class Sort
{
	int *m_pArray;
	int m_nAmount;
public:
	Sort(void);
	~Sort(void);
	void import();
	void sortReduce();
	void sortRaise();
	void sortReduce(int* ,int*);
	void sortRaise(int*, int*);
	void sortEven();
	void permute(int*, int*);
	void sortReduceNegative(int* ,int*);
	void sortNegative();
	void display();
};

