#include "Polynomial.h"
using namespace std;


Polynomial::Polynomial(){
	m_nDegree = 0;
	m_pCoefficient = NULL;
}

Polynomial::Polynomial(int nDegree, float *pCoefficient){
	m_nDegree = nDegree;
	m_pCoefficient = new float[nDegree+1];
	for (int nCount = 0; nCount <= nDegree; nCount++){
		m_pCoefficient[nCount] = *(pCoefficient + nCount);
	}
}


Polynomial::Polynomial(int nDegree){
	m_nDegree = nDegree;
	delete (m_pCoefficient);
	m_pCoefficient = new float[nDegree+1];
	for (int nCount = 0; nCount <= m_nDegree; nCount++){
		m_pCoefficient[nCount] = 0;
	}
}

Polynomial::Polynomial(const Polynomial& oPolynomial){
	m_nDegree = oPolynomial.m_nDegree;
	m_pCoefficient = new float[oPolynomial.m_nDegree + 1];
	for (int nCount = 0; nCount <= m_nDegree; nCount++){
		m_pCoefficient[nCount] = oPolynomial.m_pCoefficient[nCount];
	}
}

Polynomial::~Polynomial(){
	delete (m_pCoefficient);
}

int Polynomial::getDegree(){
	return m_nDegree;
}

float* Polynomial::getCoefficient(){
	return m_pCoefficient;
}

void Polynomial::import(){
	cout << endl << "Import degree: ";
	cin >> m_nDegree;
	m_pCoefficient = new float[m_nDegree];
	for (int nCount = 0; nCount <= m_nDegree; nCount++){
		cout << endl << "Import coefficient " <<  nCount+1 << "  : ";
		cin >> m_pCoefficient[nCount];
	}
}

float Polynomial::Calculator(float fValue){
	float fTotal = 0;
	for (int nCount = 0; nCount <= m_nDegree; nCount++){
		fTotal += m_pCoefficient[nCount] * pow(fValue, nCount);
	}
	return fTotal;
}

Polynomial Polynomial::derivative(int nTime){
	Polynomial *oPolynomial;
	Polynomial oTemp;
	if (m_nDegree >= nTime) {
		oPolynomial = new Polynomial(m_nDegree - nTime);
		for (int nCountOut = nTime; nCountOut <= m_nDegree; nCountOut++)
		for (int nCountIn = 0; nCountIn < nTime; nCountIn++)
		oPolynomial->m_pCoefficient[nCountIn] *= nCountOut * m_pCoefficient[nTime];
	}
	else
		oPolynomial = new Polynomial(0);
	oTemp = Polynomial(*oPolynomial);
	delete (oPolynomial);
	return oTemp;
}

 


