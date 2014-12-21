#pragma once
#include "Vector.h"

//-----------------------------------------------------------------
//Description: Mô phỏng ma trận sử dụng mảng 2 chiều với các số nguyên
// đơn giản
//-----------------------------------------------------------------

class Matrix{
private:
	float **m_pMatrix;
	int m_nRow;
	int m_nColumn;
public:
	Matrix(void);
	~Matrix(void);
	Matrix(int nRow, int nColumn);
	int getRow();
	int** getMatrix();
	int setMatrix(float **fMatrix);
	int getColumn();
	void import(int ,int);
	void import();
	void show();
	Matrix operator*(Matrix& oMatrix);
	float operator*(Vector& oVector);
	Matrix operator+(Matrix& oMatrix);
};

