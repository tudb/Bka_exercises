#include "Ellipse.h"
using namespace std;

Ellipse::Ellipse(){
	m_fAbscissa = 0;
	m_fOrdane = 0;
	m_fColumn = 0;
	m_fRow = 0;
}

Ellipse::Ellipse(float fAbscissa, float fOrdane, float fRow, float fColumn){
	m_fAbscissa = fAbscissa;
	m_fOrdane = fOrdane;
	m_fColumn = fColumn;
	m_fRow = fRow;
}

Ellipse::~Ellipse(){
}

void Ellipse::import(){
	Geometry::import();
	cout << endl << "Nhap truc ngang: ";
	cin >> m_fRow;
	cout << endl << "Nhap truc doc: ";
	cin >> m_fColumn;
}

void Ellipse::display(){
	cout << endl << "Ellip:";
	Geometry::display();
	cout << endl << "Truc ngang: " << m_fRow;
	cout << endl << "Truc doc: " << m_fColumn;
}


