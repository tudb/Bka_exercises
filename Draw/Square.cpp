#include "Square.h"
using namespace std;

Square::Square(void){
}

Square::Square(Geometry *pGeometry){
	for (int nCount = 0; nCount < 4; nCount++){
		m_pPoint[nCount] = *(pGeometry +   nCount);
	}
}

Square::~Square(void){
}
