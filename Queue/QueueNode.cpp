#include "QueueNode.h"


QueueNode::QueueNode(){
	m_nData = 0;
	m_pNext = NULL;
}

QueueNode::QueueNode(int nData){
	m_nData = nData;
	m_pNext = NULL;
}

QueueNode::~QueueNode(){
	m_pNext = NULL;
}
