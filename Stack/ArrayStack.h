#pragma once
#include <iostream>
#define MAX 100

//-----------------------------------------------------------------
//Description: Môn phỏng stack sử dụng mảng
//-----------------------------------------------------------------

class ArrayStack{
private:
	int* m_pArray;
	int* m_pTop;
	int m_nCount;
public:
	ArrayStack();
	~ArrayStack();
	int push(int nNumberAdd);
	int pop();
	int top();
	int size();
	bool isEmpty();
	bool fullStack();
	void displayPrime();
};

