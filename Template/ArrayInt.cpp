#include "ArrayInt.h"
using namespace std;

ArrayInt::ArrayInt(){
}


ArrayInt::~ArrayInt(){
}

void ArrayInt::import(){
	cout << endl << "Import amount of integer: "; 
	cin >> m_nAmount;
	m_pInt = new int[m_nAmount];
}

void ArrayInt::permute(int *pLast, int *pNext){
	int nTemp;
	nTemp = *pLast;
	*pLast = *pNext;
	*pNext = nTemp;
}

void ArrayInt::display(){
	for (int nNumber = 0 ;nNumber < m_nAmount; nNumber++){
		cout << "  " << m_pInt[nNumber] << "  ";
		if (nNumber % 3 == 0) cout << endl;
	}
}
