#pragma once
#include <iostream>
class ArrayInt{
protected:
	int m_nAmount;
	int *m_pInt;
public:
	ArrayInt();
	~ArrayInt();
	void import();
	static void permute(int *pLast, int *pNext);
	void display();
};

