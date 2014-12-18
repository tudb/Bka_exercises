#include "Queue.h"
using namespace std;


Queue::Queue(){
	m_pHead = new QueueNode();
	m_pTail = m_pHead;
}

Queue::Queue(int nData){
	m_pHead = new QueueNode(nData);
	m_pTail = m_pHead;
}

Queue::~Queue(){
}

bool Queue::empty(){
	if (m_pHead == NULL ) return true;
	return false;
}

int Queue::push(int nData){
	QueueNode *pTemp;
	pTemp = new QueueNode(nData);
	if (pTemp == NULL) {
		cout << endl << "Full memory";
		return 0;
	}
	m_pTail->m_pNext = pTemp;
	m_pTail = pTemp;
	return 1;
}

int Queue::pop(){
	if (empty()) {
		cout << endl << "Queue is empty";
		return 0;
	}
	QueueNode *pTemp;
	pTemp = m_pHead;
	m_pHead = m_pHead->m_pNext;
	return 1;
	delete (pTemp);
}

int Queue::front(){
	if (!empty()) return m_pHead->m_nData;
	else cout << endl << "Queue is empty return 0";
	return 0;
}

int Queue::back(){
	if (!empty()) return m_pTail->m_nData;
	else cout << endl << "Queue is empty return 0";
	return 0;
}

int Queue::size(){
	int nCount = 0;
	QueueNode *pTemp;
	pTemp = m_pHead;
	while (pTemp != NULL){
		pTemp = pTemp->m_pNext;
		nCount++;
	}
	return nCount;
}
