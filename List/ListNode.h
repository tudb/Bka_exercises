#pragma once
#include "Node.h"
#include <iostream>

class ListNode{
public:
	Node *m_pTop;
	ListNode();
	ListNode(int nData);
	~ListNode();
	void memoryFull();
	void insertBegin(int nData);
	void insertEnd(int nData);
	void removeBegin();
	void removeEnd();
	void removeRandom(int nPosition);
	void insertRandom(int nPosition, int nData);
	void readData(int nPosition);
	bool empty();
};

