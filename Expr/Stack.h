#pragma once
#include "StackNode.h"
using namespace std;
#define NULL 0


class Stack {
public:
	StackNode* m_pTop;
	Stack();
	~Stack();
	bool stackEmpty();
	void stackFull();
	int stackPush(int nNumber);
	int stackPop();
	void display();
};

