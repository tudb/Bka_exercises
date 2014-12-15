#include "Vector.h"
#include <iostream>
#include <math.h>
using namespace std;

Vector::Vector(){	
	m_nSide = 2;
	m_fVector = new float[m_nSide];
}

void Vector::import(){
	cout << endl << "Nhap so chieu: ";
	cin >> m_nSide;
	m_fVector = new float[m_nSide];
	for (int nNumber = 0; nNumber < m_nSide; nNumber++){
		cout << endl << "Nhap diem thu " << nNumber + 1 << " : ";
		cin >> m_fVector[nNumber];
	}
}

float* Vector::getVector(){
	return m_fVector;
}

int Vector::getSide(){
	return m_nSide;
}

Vector::~Vector(){
	delete (m_fVector);
}

float Vector::getLength(){
	float fTotal = 0;
	for (int nNumber =0; nNumber < m_nSide; nNumber++){
		fTotal += pow(m_fVector[nNumber], 2);
	}
	return sqrt(fTotal);
}


