#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix(){
	m_nRow = 2;
	m_nColumn = 2;
	m_pMatrix = new float*[m_nColumn];
	for (int nNumber = 0; nNumber < m_nColumn; nNumber++){
	m_pMatrix[nNumber] = new float[m_nRow];
	}
}

Matrix::Matrix(int nRow, int nColumn){
	m_nRow = nRow;
	m_nColumn = nColumn;
	m_pMatrix = new float*[m_nColumn];
	for (int nNumber = 0; nNumber < m_nColumn; nNumber++){
	m_pMatrix[nNumber] = new float[m_nRow];
	}
}

Matrix::~Matrix(){
	delete m_pMatrix;	
}

int Matrix::getRow(){
	return m_nRow;
}

int Matrix::getColumn(){
	return m_nColumn;
}

int Matrix::setMatrix(float **pMatrix){
	for (int nNumber1 = 0; nNumber1 < m_nRow; nNumber1++){
		for (int nNumber2 = 0; nNumber2 < m_nColumn; nNumber2++){
			m_pMatrix[nNumber1][nNumber2] = pMatrix[nNumber1][nNumber2];
		}
	}	
}

void Matrix::import(){
	for (int nNumber1 = 0; nNumber1 < m_nRow; nNumber1++){
		for (int nNumber2 = 0; nNumber2 < m_nColumn; nNumber2++){
			cout << endl << "Nhap phan tu : A[" << nNumber2 + 1 << "][" << nNumber1 + 1 << "] :";
			cin >> *(*(m_pMatrix + nNumber1) + nNumber2);
		}
	}
}

void Matrix::show(){
	for (int nNumber1 = 0; nNumber1 < m_nRow; nNumber1++){
		for (int nNumber2 = 0; nNumber2 < m_nColumn; nNumber2++){
			cout << *(*(m_pMatrix + nNumber1) + nNumber2);
			cout << "  ";
		}
		cout << endl;
	}
}

Matrix Matrix::operator*(Matrix& oMatrix){
	if (oMatrix.getColumn() != m_nRow) {
		cout << "Khong the nhan" << endl;
		return Matrix();
	}
	Matrix oMatrix = Matrix(oMatrix.m_nRow, oMatrix.m_nColumn);
	for (int nNumber1 = 0; nNumber1 < m_nRow; nNumber1++){	
		for (int nNumber2 =0; nNumber2 < oMatrix.m_nRow; nNumber2++){
			float nTotal = 0;
			for (int nNumber3 = 0; nNumber3 < m_nColumn; nNumber3++){			
				nTotal += m_pMatrix[nNumber1][nNumber3] * oMatrix.m_pMatrix[nNumber2][nNumber3];
			}
			oMatrix.m_pMatrix[nNumber1][nNumber2] = nTotal;
		}
	}
	return oMatrix;
}

float Matrix::operator*(Vector& oVector){
	if (m_nColumn != oVector.getSide()){
		cout << "khong the nhan" << endl;
		return 0;
	}
	float fTotal = 0;
	for (int nNumber1 = 0; nNumber1 < m_nRow; nNumber1++){	
			for (int nNumber2 = 0; nNumber2 < m_nColumn; nNumber2++){			
				fTotal += m_pMatrix[nNumber1][nNumber2] * oVector.getVector()[nNumber2];
			}
	}
	return fTotal;
}

Matrix Matrix::operator+(Matrix& oMatrix){
	if ((oMatrix.m_nRow != m_nRow) || (oMatrix.m_nColumn != m_nColumn)){
		cout << "Khong hop le";
		return Matrix();
	}
	Matrix oMatrixTemp;
	for (int nNumber1 = 0; nNumber1 < m_nRow; nNumber1++){	
			for (int nNumber2 = 0; nNumber2 < m_nColumn; nNumber2++){			
				oMatrixTemp.m_pMatrix[nNumber1][nNumber2] = m_pMatrix[nNumber1][nNumber2] + oMatrix.m_pMatrix[nNumber1][nNumber2];
			}
	}
}
