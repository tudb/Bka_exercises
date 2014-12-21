#pragma once
#include "QueueNode.h"
#include <iostream>
#define NULL 0

//-----------------------------------------------------------------
//Description: Mô phỏng hàng đợi cùng các phép xử lí cơ bản
//-----------------------------------------------------------------

class Queue{
public:
	QueueNode *m_pHead;
	QueueNode *m_pTail;
	Queue(int nData);
	Queue(void);
	~Queue(void);
	bool empty();
	int size();
	int back();
	int front();
	int push(int nData);
	int pop();
};

