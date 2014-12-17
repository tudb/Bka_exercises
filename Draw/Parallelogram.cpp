#include "Parallelogram.h"


Parallelogram::Parallelogram(void){
}


Parallelogram::~Parallelogram(void){
}

Parallelogram::Parallelogram(Geometry *pGeometry){
	for (int nCount = 0; nCount < 4; nCount++){
		m_pPoint[nCount] = *(pGeometry +   nCount);
	}
}