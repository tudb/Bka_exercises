#include "Stack.h"
#include <iostream>
using namespace std;


Stack::Stack(){
	if (!stackEmpty())
	m_pTop = new StackNode();
}


void Stack::stackFull(){
	cout << "Stack Full" << endl;
}

Stack::~Stack(){
	delete m_pTop;
}

bool Stack::stackEmpty(){
	if (m_pTop == NULL) return true;
	return false;
}

int Stack::stackPush(int nNumber){
	StackNode *pStack;
	pStack = new StackNode();
	if (pStack == NULL) {
		stackFull();
		return 0;
	}
	pStack->m_nNumber = nNumber;
	pStack->m_pNext = m_pTop;
	m_pTop = pStack;
	return 1;
}

int Stack::stackPop(){
	int nTemp;
	StackNode *pNode;
	if (stackEmpty()){
		cout << "Can't pop from Stack" << endl;
		return 0;
	}
	pNode = m_pTop;
	nTemp = pNode->m_nNumber;
	m_pTop = pNode->m_pNext;
	delete (pNode);
	return nTemp;
}

void Stack::display(){
	StackNode *pNode;	
	while (m_pTop != NULL){
		pNode = m_pTop;
		cout << pNode->m_nNumber << endl;
		m_pTop = pNode->m_pNext;
	}
}
