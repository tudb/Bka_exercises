#include "RectangleFake.h"
using namespace std;

RectangleFake::RectangleFake(){
}


RectangleFake::~RectangleFake(){
}

RectangleFake::RectangleFake(Geometry *pGeometry){
	for (int nCount = 0; nCount < 4; nCount++){
		m_pPoint[nCount] = *(pGeometry +   nCount);
	}
}

void RectangleFake::import(){
	cout << endl << "Nhap vao dinh goc trai: ";
	m_pPoint[0].import();
	float fLength, fWidth;
	cout << endl << "Nhap vao chieu dai: ";
	cin >> fLength;
	cout << endl << "Nhap vao chieu rong: ";
	cin >> fWidth;
	m_pPoint[1].setAbscissa(m_pPoint[0].getAbscissa() + fLength);
	m_pPoint[1].setOrdane(m_pPoint[0].getOrdane());
	m_pPoint[3].setAbscissa(m_pPoint[0].getAbscissa());
	m_pPoint[3].setOrdane(m_pPoint[0].getOrdane()  - fWidth);
	m_pPoint[2].setAbscissa(m_pPoint[1].getAbscissa());
	m_pPoint[2].setOrdane(m_pPoint[3].getOrdane());
}