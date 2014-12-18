#include "Parallelogram.h"
using namespace std;

Parallelogram::Parallelogram(void){
}


Parallelogram::~Parallelogram(void){
}

Parallelogram::Parallelogram(Geometry *pGeometry){
	for (int nCount = 0; nCount < 4; nCount++){
		m_pPoint[nCount] = *(pGeometry +   nCount);
	}
}

void Parallelogram::import(){
	cout << endl << "Nhap vao diem goc trai tren: ";
	m_pPoint[0].import();
	cout << endl << "Nhap vao diem goc trai duoi: ";
	m_pPoint[3].import();
	float fLength;
	cout << endl << "Nhap do dai canh song song truc hoanh";
	cin >> fLength;
	m_pPoint[1].setAbscissa(m_pPoint[0].getAbscissa() + fLength);
	m_pPoint[1].setOrdane(m_pPoint[0].getOrdane());
	m_pPoint[2].setAbscissa(m_pPoint[3].getAbscissa() + fLength);
	m_pPoint[2].setOrdane(m_pPoint[3].getOrdane());
}