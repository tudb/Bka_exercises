#include "Sort.h"
using namespace std;

Sort::Sort(void){
	m_nAmount = 100;
	m_pArray = new int[m_nAmount];
}


Sort::~Sort(void){
	delete (m_pArray);
}

void Sort::import(){
	cout << "Nhap so phan tu : ";
	cin >> m_nAmount;
	for (int nCount = 0; nCount < m_nAmount; nCount++){
		cout << endl << "Nhap pha tu thu "  << nCount+1 << " : ";
		cin >> m_pArray[nCount];
	}
}

void Sort::sortRaise(int *pFirst, int *pSecond){
	for (int *pCount1 = pFirst; pCount1 != pSecond + 1; pCount1++)
		for (int *pCount2 = pCount1; pCount2 != pSecond + 1; pCount2++){
			if (*(pCount1) > *(pCount2)){ 
				permute(pCount1, pCount2);
			}
		}
}

void Sort::sortReduce(int *pFirst, int *pSecond){
	for (int *pCount1 = pFirst; pCount1 != pSecond + 1; pCount1++)
		for (int *pCount2 = pCount1; pCount2 != pSecond + 1; pCount2++){
			if (abs(*(pCount1)) < abs(*(pCount2))){ 
				permute(pCount1, pCount2);
			}
		}
}

void Sort::sortRaise(){
	sortRaise(&m_pArray[0], &m_pArray[m_nAmount - 1]);
}


void Sort::sortReduce(){
	sortReduce(&m_pArray[0], &m_pArray[m_nAmount - 1]);
}

void Sort::permute(int *pFirst, int *pSecond){
	int nTemp = *(pFirst);
	*(pFirst) = *(pSecond);
	*(pSecond) = nTemp;
}

void Sort::sortReduceNegative(int *pFirst, int *pSecond){
	for (int *pCount1 = pFirst; pCount1 != pSecond + 1; pCount1++)
		for (int *pCount2 = pCount1; pCount2 != pSecond + 1; pCount2++){
			if (abs(*(pCount1)) > abs(*(pCount2))){ 
				permute(pCount1, pCount2);
			}
		}
}


void Sort::sortEven(){
	for (int nCount1 = 0; nCount1 < m_nAmount - 1; nCount1++)
		for (int nCount2 = nCount1; nCount2 < m_nAmount; nCount2++){
			if (((*(m_pArray + nCount1) % 2) == 1) && (((*(m_pArray + nCount2) % 2) == 0)))
				permute((m_pArray + nCount1), (m_pArray + nCount2));
		};
	int nMiddle = 0;
	for (int nCount = 0; nCount < m_nAmount; nCount++){
		if ((m_pArray[nCount] % 2) == 0) break;
	}
	if (nMiddle > 0) nMiddle--;
	sortRaise(&m_pArray[0], &m_pArray[nMiddle]);
	sortReduce(&m_pArray[nMiddle + 1] , &m_pArray[m_nAmount - 1]);
}	

void Sort::sortNegative(){
	for (int nCount1 = 0; nCount1 < m_nAmount - 1; nCount1++)
		for (int nCount2 = nCount1; nCount2 < m_nAmount; nCount2++){
			if ((*(m_pArray + nCount1) < 0) && ((*(m_pArray + nCount2) >= 0))){ 
				permute((m_pArray + nCount1), (m_pArray + nCount2));
			}
		};
	int nMiddle = 0;
	for (int nCount = 0; nCount < m_nAmount; nCount++){
		if ((m_pArray[nCount] ) < 0) break;
		nMiddle++;
	}
	if (nMiddle > 0) nMiddle--;
	sortRaise(&m_pArray[0], &m_pArray[nMiddle]);
	sortReduceNegative(&m_pArray[nMiddle + 1] , &m_pArray[m_nAmount - 1]);
}

void Sort::display(){
	cout << "Cac phan tu cua mang : ";
	for (int nCount = 0; nCount < m_nAmount; nCount++){
		cout << endl << "Nhap pha tu thu " << nCount+1 << " : " << m_pArray[nCount];
	}
}