#include <iostream>
#include <string>
using namespace std;

template<class T>
void IncreaseSort(T *Array, int nAmount){
	T temp;
	int nCount;
	for (int i = 0; i < nAmount - 1; i++)
		for (int j = i; j < nAmount; j++){
			if (*(Array + i) > *(Array + j)){
				temp = *(Array + i);
				*(Array + i) = *(Array + j);
				*(Array + j) = temp;
			}
		}
}
