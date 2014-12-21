#include "toIncrease.h"


toIncrease::toIncrease(){
}


toIncrease::~toIncrease(){
}



void toIncrease::sortToIncrease(){
	for (int nCount1 = 0; nCount1 < m_nAmount - 1 ; nCount1++)
		for (int nCount2 = nCount1; nCount2 < m_nAmount; nCount2++){
			if (m_pInt[nCount1] > m_pInt[nCount2])
				permute(&nCount1, &nCount2);
		}
}