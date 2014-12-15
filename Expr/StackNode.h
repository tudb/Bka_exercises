#pragma once
#define NULL 0

class StackNode{
public:
	int m_nNumber;
	string m_sString;
	StackNode* m_pNext;
	StackNode();
	~StackNode();
};

