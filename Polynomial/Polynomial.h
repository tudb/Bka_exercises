#pragma once
#include <math.h>
#include <fstream>
#include <iostream>
#define NULL 0
using namespace std;

//-----------------------------------------------------------------
//Description: Mô phỏng lớp đa thức
//Thuộc tính:gồm có bậc và mảng chứa hệ số
//Phương thức: đạo hàm, tính kết quả, ghi ra file..
//-----------------------------------------------------------------

class Polynomial{
	int m_nDegree;
	float *m_pCoefficient;
	Polynomial(int nDegree);
	Polynomial(int nDegree, int nNumber);
public:
	Polynomial();
	Polynomial(const Polynomial& oPolynomial);
	Polynomial(int nDegree, float *pCoefficient);
	~Polynomial();
	int getDegree();
	float* getCoefficient();
	void import();//cẩn thận thừa vùng nhớ khi gọi 2 lần phương thức này
	float Calculator(float fValue);
	Polynomial derivative(int nTime);
	void Polynomial::writeDeri(string sFile, float *pNumber, int nAmount);
};

