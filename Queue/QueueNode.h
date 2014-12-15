#pragma once
#define NULL 0
class QueueNode{
public:
	int m_nData;
	QueueNode *m_pNext;
	QueueNode(void);
	~QueueNode(void);
};

