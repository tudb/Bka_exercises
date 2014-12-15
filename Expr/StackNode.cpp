#include "StackNode.h"


StackNode::StackNode(){
	m_nNumber = 0;
	m_sString = "";
}


StackNode::~StackNode(){
	if (m_pNext != NULL) delete (m_pNext);
}