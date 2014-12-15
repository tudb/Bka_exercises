#include "Vector.h"
#include <iostream>
using namespace std;

//KhõÒi taòo vector coì toòa ðôò (0,0)
Vector::Vector(){	
	this->m_fAbscissa = 0;
	this->m_fOrdane = 0;
}

//HaÌm khõÒi taòo coì ðôìi
Vector::Vector(float m_fAbscissa, float	m_fOrdane){
	this->m_fAbscissa = m_fAbscissa;
	this->m_fOrdane = m_fOrdane;
}

//Nhâòp toòa ðôò vector
void Vector::import(){
	cout << "Nhap hoanh do vecto : ";
	cin >> m_fAbscissa;
	cout << endl;
	cout << "Nhap Tung do vecto : ";
	cin >> m_fOrdane;
	cout << endl;
}

Vector::~Vector()
{
}
