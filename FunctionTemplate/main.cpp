#include <Windows.h>
#include <iostream>
using namespace std;

template<class T>
T Min(T T1, T T2){
	if (T1 > T2) return T2; 
	else return T1;
}

template<class T>
T Max(T T1, T T2){
	if (T1 < T2) return T2; 
	else return T1;
}

template<class T>
T FindMax(T* pT1, int nSize){
	T tMax = *pT1;
	for (int tCount = 0; tCount < nSize; tCount++){
		if (*(pT1 + tCount) > tMax) tMax = *(pT1 + tCount);
	}
	else return tMax;
	cout << "Khong ton tai so nguyen duong lon nhat";
}

template<class T>
void ShortToRaise(T *pT, int nSize){
	for (int nCount1 = 0; nCount1 < nSize - 1; nCount1++)
		for (int nCount2 = nCount1; nCount2 < nSize; nCount2++){
			if (*(pT + nCount2) < *(pT +nCount1)) {
				T tTemp;
				tTemp = *(pT + nCount2);
				*(pT + nCount2) = *(pT + nCount1);
				*(pT + nCount1) = tTemp;
			}
		}
	for (int nCount = 0; nCount < nSize; nCount++){
		cout << *(pT + nCount) << "  ";
	}
}

int main(){
	int pArray[] = {1, 3, 4 ,2};
	cout << Max<int>(5,4);
	cout << FindMax<int>(pArray, 4);
	system("pause");
}