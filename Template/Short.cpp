#include "Short.h"

Short::Short(void){
	m_nAmount = 100;
	m_pArray = new int[m_nAmount];
}

Short::copy(int *pBegin, int *pEnd){
	int nCount = 0;
	for (int *pPoint = pBegin; pPoint != pEnd; pPoint++){
		m_pArray[nCount++] = *pPoint;
	}
}

Short::~Short(void){
	delete (m_pArray);
}

void Short::permute(int *pFirst, int *pSecond){
	int nTemp;
	nTemp = *(pFirst);		
	*(pFirst) = *(pSecond);
	*(pSecond) = nTemp;
}

void Short::sortRaise(){
	int nTemp;
	for (int i = 0; i < m_nAmount - 1; i++)
		for (int j = i; j < m_nAmount; j++){
			if (*(m_pArray + i) > *(m_pArray + j)){
				permute((m_pArray + i) , (m_pArray + j));
			}
		}
}

void Short::sortReduce(int *pArray, int nAmount){
	int nTemp;
	for (int i = 0; i < m_nAmount - 1; i++)
		for (int j = i; j < m_nAmount; j++){
			if (abs(*(nArray + i)) > abs(*(nArray + j))){
				permute((m_pArray + i) , (m_pArray + j));
			}
		}
}

void Short::sortEven(){
	int nTemp;
	for (int i = 0; i < m_nAmount - 1; i++)
		for (int j = i; j < m_nAmount; j++){
			if (*(m_pArray + j) % 2 != 0) 
				permute((m_pArray + i) , (m_pArray + j));
		};
	int nMiddle = 0;
	for (int nCount =0; nCount < m_nAmount; nCount++){
		if (m_pArray[nCount] % 2 == 0) break;
		nMiddle++;
	}
	if (nMiddle > 0) nMiddle--;
	Short oOdd;
	Short oEven;
	oOdd.copy(&m_pArray[0], &m_pArray[nMiddle];
	oEven.copy(&m_pArray[nMiddle + 1] , &m_pArray[m_nAmount -1]);
	oEven.sortRaise();
	oOdd.sortReduce();
	(*this).copy(&m_pArray[0], &oOdd.m_pArray[nMiddle]);
	for (int nCount = nMiddle + 1; nCount < m_nAmount; nCount ++){
		m_pArray[nCount] = oOdd.m_pArray[nCount - nMiddle -1];
	}
}


