#include "ShapeSpecial.h"
using namespace std;

ShapeSpecial::ShapeSpecial(){
}

ShapeSpecial::~ShapeSpecial(){
}

Geometry* ShapeSpecial::getPoint(){
	return m_pPoint;
}

void ShapeSpecial::setPoint(Geometry *pGeometry){
	for (int nCount =0; nCount < 4; nCount++){
		m_pPoint[nCount] = *(pGeometry +   nCount);
	}
}

void ShapeSpecial::import(){
}

void ShapeSpecial::draw(){
	for (int nCount = 0; nCount < 3; nCount++){
		line(m_pPoint[nCount].getAbscissa(), m_pPoint[nCount].getOrdane(), m_pPoint[nCount + 1].getAbscissa(), m_pPoint[nCount + 1].getOrdane());
	}
	line(m_pPoint[0].getAbscissa(), m_pPoint[0].getOrdane(), m_pPoint[3].getAbscissa(), m_pPoint[3].getOrdane());
}