#include "Trapezium.h"


Trapezium::Trapezium(){
}

Trapezium::Trapezium(Geometry *pGeometry){
	for (int nCount = 0; nCount < 4; nCount++){
		m_pPoint[nCount] = *(pGeometry +   nCount);
	}
}

Trapezium::~Trapezium(){
}


