#include "RectangleFake.h"


RectangleFake::RectangleFake(){
}


RectangleFake::~RectangleFake(){
}

RectangleFake::RectangleFake(Geometry *pGeometry){
	for (int nCount = 0; nCount < 4; nCount++){
		m_pPoint[nCount] = *(pGeometry +   nCount);
	}
}

