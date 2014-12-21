#include "Sort.h"
#include <math.h>
#include <iostream>
#include <string>
using namespace std;
template<class T>
class SortTemp
{
	T *m_pArray;
	int m_nAmount;
public:
	SortTemp(void);
	~SortTemp(void);
	void import();
	void sortReduce();
	void sortRaise();
	void sortReduce(T* ,T*);
	void sortRaise(T*, T*);
	void sortEven();
	void permute(T* , T*);
	void sortNegative();
	void sortReduceNegative(T* ,T*);
	void display();
};

template<class T>
SortTemp<T>::SortTemp(void){
	m_nAmount = 100;
	m_pArray = new int[m_nAmount];
}

template<class T>
SortTemp<T>::~SortTemp(void){
	delete (m_pArray);
}

template<class T>
void SortTemp<T>::import(){
	cout << "Nhap so phan tu : ";
	cin >> m_nAmount;
	for (int nCount = 0; nCount < m_nAmount; nCount++){
		cout << endl << "Nhap pha tu thu "  << nCount+1 << " : ";
		cin >> m_pArray[nCount];
	}
}

template<class T>
void SortTemp<T>::permute(T *pFirst, T *pSecond){
	T nTemp = *(pFirst);
	*(pFirst) = *(pSecond);
	*(pSecond) = nTemp;
}


template<class T>
void SortTemp<T>::sortRaise(T *pFirst, T *pSecond){
	for (T *pCount1 = pFirst; pCount1 != pSecond + 1; pCount1++)
		for (T *pCount2 = pCount1; pCount2 != pSecond + 1; pCount2++){
			if (*(pCount1) > *(pCount2)){ 
				permute(pCount1, pCount2);
			}
		}
}

template<class T>
void SortTemp<T>::sortReduce(T *pFirst, T *pSecond){
	for (T *pCount1 = pFirst; pCount1 != pSecond + 1; pCount1++)
		for (T *pCount2 = pCount1; pCount2 != pSecond + 1; pCount2++){
			if (abs(*(pCount1)) < abs(*(pCount2))){ 
				permute(pCount1, pCount2);
			}
		}
}

template<class T>
void SortTemp<T>::sortReduceNegative(T *pFirst, T *pSecond){
	for (T *pCount1 = pFirst; pCount1 != pSecond + 1; pCount1++)
		for (T *pCount2 = pCount1; pCount2 != pSecond + 1; pCount2++){
			if (abs(*(pCount1)) > abs(*(pCount2))){ 
				permute(pCount1, pCount2);
			}
		}
}

template<class T>
void SortTemp<T>::sortRaise(){
	sortRaise(&m_pArray[0], &m_pArray[m_nAmount - 1]);
}


template<class T>
void SortTemp<T>::sortReduce(){
	sortReduce(&m_pArray[0], &m_pArray[m_nAmount - 1]);
}

template<class T>
void SortTemp<T>::sortEven(){
	for (int nCount1 = 0; nCount1 < m_nAmount - 1; nCount1++)
		for (int nCount2 = nCount1; nCount2 < m_nAmount; nCount1++){
			if (((*(m_pArray + nCount1) % 2) == 1) && (((*(m_pArray + nCount2) % 2) == 0)))
				permute((m_pArray + nCount1), (m_pArray + nCount2));
		};
	T nMiddle = 0;
	for (int nCount = 0; nCount < m_nAmount; nCount++){
		if ((m_pArray[nCount] % 2) == 0) break;
	}
	if (nMiddle > 0) nMiddle--;
	sortRaise(&m_pArray[0], &m_pArray[nMiddle]);
	sortReduce(&m_pArray[nMiddle + 1] , &m_pArray[m_nAmount - 1]);
}	

template<class T>
void SortTemp<T>::sortNegative(){
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

template<class T>
void SortTemp<T>::display(){
	cout << "Cac phan tu cua mang : ";
	for (int nCount = 0; nCount < m_nAmount; nCount++){
		cout << endl << "Nhap pha tu thu " << nCount+1 << " : " << m_pArray[nCount];
	}
}

int main(){
	SortTemp<int> oSort;
	oSort.import();
	oSort.sortNegative();
	oSort.display();
	cout << endl;
	system("pause");
}