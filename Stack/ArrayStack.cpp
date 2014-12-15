#include <iostream>
#include "ArrayStack.h"
#define MAX 100
using namespace std;

ArrayStack::ArrayStack(){
	m_pArray = new int[MAX];
	m_nCount = 0;
	m_pTop = m_pArray;
}


ArrayStack::~ArrayStack(){
	delete (m_pArray);
}

bool ArrayStack::fullStack(){
	if (m_pTop > &m_pArray[MAX - 1]){
		cout << "Full Stack" << endl;
		return true;
	}
	return false;
}

int ArrayStack::push(int nNumberAdd){
	if (fullStack()){	
		return 0;
	}
	else {
		*m_pTop = nNumberAdd;
		m_pTop++;
		m_nCount++;
		return 1;
	}
}

int ArrayStack::pop(){
	if (fullStack() || isEmpty()) return 0;
	int nTemp;
	nTemp = *(m_pTop - 1);
	*m_pTop = 0;
	m_pTop--;
	m_nCount--;
	return nTemp;
}

int ArrayStack::top(){
	if (isEmpty()) {
		cout << "Emty Stack" << endl;
		return 0;
	}
	return *m_pTop;
}

int ArrayStack::size(){
	return m_nCount;
}

bool ArrayStack::isEmpty(){
	if (m_nCount == 0) return true;
	return false;
}

void ArrayStack::displayPrime(){
	if (!isEmpty()){
		for (int nNumber = 0; nNumber < m_nCount; nNumber++){
			if (nNumber == 0) cout << m_pArray[0];
			else
				cout << " * " << m_pArray[nNumber];
		}
	}
}