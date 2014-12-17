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


void Square::import(){
	cout << endl << "Nhap toa do dinh";
	m_pPoint[0].import();
	float fLength;
	cout << endl << "Nhap do dai 1 canh";
	cin >> fLength;
	m_pPoint[1].setAbscissa(m_pPoint[0].getAbscissa() + fLength);
	m_pPoint[1].setOrdane(m_pPoint[0].getOrdane());
	m_pPoint[3].setAbscissa(m_pPoint[0].getAbscissa());
	m_pPoint[3].setOrdane(m_pPoint[0].getOrdane()  + fLength);
	m_pPoint[2].setAbscissa(m_pPoint[1].getAbscissa());
	m_pPoint[2].setOrdane(m_pPoint[3].getOrdane());
}
	
