#pragma once
#define NULL 0
class Node{
public:
	int m_nData;
	Node *m_pNext;
	Node();
	Node(int nData);
	~Node();
};

