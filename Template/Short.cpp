#include "Short.h"

Short::Short(void){
	m_nAmount = 100;
	m_pArray = new int[m_nAmount];
}


Short::~Short(void){
	delete (m_pArray);
}

void Short::sortRaise(){
	int nTemp;
	for (int i = 0; i < m_nAmount - 1; i++)
		for (int j = i; j < m_nAmount; j++){
			if (*(m_pArray + i) > *(m_pArray + j)){ 
					nTemp = *(m_pArray + i);
					*(m_pArray + i) = *(m_pArray + j);
					*(m_pArray + j) = nTemp;
			}
		}
}

void Short::sortReduce(int *pArray, int nAmount){
	int nTemp;
	for (int i = 0; i < m_nAmount - 1; i++)
		for (int j = i; j < m_nAmount; j++){
			if (abs(*(nArray + i)) > abs(*(nArray + j))){ 
					nTemp = *(pArray + i);
					*(pArray + i) = *(pArray + j);
					*(pArray + j) = nTemp;
			}
		}
}

void Short::sortEven(){
	int nTemp;
	for (int i = 0; i < m_nAmount - 1; i++)
		for (int j = i; j < m_nAmount; j++){
			if (*(pArray + j) % 2 != 0){ 
					nTemp = *(pArray + i);
					*(pArray + i) = *(pArray + j);
					*(pArray + j) = nTemp;
			}
		}
	