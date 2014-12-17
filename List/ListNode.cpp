#include "ListNode.h"
using namespace std;

ListNode::ListNode(){
	m_pTop = new Node();
}

ListNode::ListNode(int nData){
	m_pTop = new Node(nData);
}

ListNode::~ListNode(){
	delete (m_pTop);
}

void ListNode::memoryFull(){
	cout << endl << "Memory Full";
}

void ListNode::insertBegin(int nData){
	Node *pNode;
	pNode = new Node(nData);
	if (pNode != NULL) {
		pNode->m_pNext = m_pTop;
		m_pTop = pNode;
	}
	else memoryFull();
}

void ListNode::insertEnd(int nData){
	Node *pNode, *pTemp;
	pNode = new Node(nData);
	pNode = m_pTop;
	if (pNode != NULL){
		while (pTemp->m_pNext != NULL){
			pTemp = pTemp->m_pNext;
		}
		pTemp->m_pNext = pNode;
	}
	else memoryFull();
}

void ListNode::insertRandom(int nPosition, int nData){
	Node *pNode, *pTemp;
	pNode = new Node(nData);
	int nCount = 0;
	pTemp = m_pTop;
	if (!empty()){
		while ((pTemp->m_pNext != NULL) || (nCount < nPosition)){
			pTemp = pTemp->m_pNext;
			nCount++;
		}
		if (nCount == nPosition){
			pNode->m_pNext = pTemp->m_pNext;
			pTemp->m_pNext = pNode->m_pNext;
		}
		else cout << endl << "Not found your position";
	}
	else cout << endl << "ListEmpty";
}

bool ListNode::empty(){
	if (m_pTop == NULL) return true;
	return false;
}


