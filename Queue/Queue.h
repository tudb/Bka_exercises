#pragma once
#include "QueueNode.h"
#include <iostream>
#define NULL 0
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

