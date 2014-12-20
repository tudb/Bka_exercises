#include "Node.h"


Node::Node(){
	m_nData = 0;
	m_pNext = NULL;
}

Node::Node(int nData){
	m_nData = nData;
}

Node::~Node(void)
{
}
