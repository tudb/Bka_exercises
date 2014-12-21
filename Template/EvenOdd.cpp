#include "EvenOdd.h"


EvenOdd::EvenOdd(){
}


EvenOdd::~EvenOdd(){
}

int* EvenOdd::sort(){
	int* pNewInt;
	pNewInt = new int[m_nAmount];
	int nCountEven = 0;
	int nCountOdd = 0;
	for (int nCount = 0; nCount < m_nAmount ; nCount++){
		if ((m_pInt[nCount] % 2 == 0) && (m_pInt[nCount] >= 0)) nCountEven++;
		if (m_pInt[nCount] % 2 == 1) nCountEven++;
	}


