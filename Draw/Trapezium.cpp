#include "Trapezium.h"
using namespace std;

Trapezium::Trapezium(){
}

Trapezium::Trapezium(Geometry *pGeometry){
	for (int nCount = 0; nCount < 4; nCount++){
		m_pPoint[nCount] = *(pGeometry +   nCount);
	}
}

Trapezium::~Trapezium(){
}

void Trapezium::import(){
	cout << "Nhap vao toa do diem goc phai tren: ";
	m_pPoint[0].import();
	cout << "Nhap vao toa do diem goc trai tren: ";
	m_pPoint[3].import();
	float fBig;
	float fSmall;
	cout << endl << "Nhap do dai day be: ";
	cin >> fSmall;
	cout << endl << "Nhap do dai day lon: ";
	cin >> fBig;
	m_pPoint[1].setAbscissa(m_pPoint[0].getAbscissa() + fSmall);
	m_pPoint[1].setOrdane(m_pPoint[0].getOrdane());
	m_pPoint[2].setAbscissa(m_pPoint[3].getAbscissa() + fBig);
	m_pPoint[2].setOrdane(m_pPoint[3].getOrdane());
}