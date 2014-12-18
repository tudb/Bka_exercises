#include "Polynomial.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
using namespace std;

void writef(strinh sFile, float *fSave, Polynomial oPolynomial){
	for (int nCount =0; nCount <= 2; nCount++){
		write << oPolynomial.Calculator(*(fSave + nCount));
	}
}

void writeg(ofstream write, float *fSave, Polynomial oPolynomial){
	for (int nCount =0; nCount <= 3; nCount++){
		write << oPolynomial.Calculator(*(fSave + nCount));
	}
}

void writeh(ofstream write, float *fSave, Polynomial oPolynomial){
	for (int nCount =0; nCount <= 4; nCount++){
		write << oPolynomial.Calculator(*(fSave + nCount));
	}
}

void write(Polynomial *oPolynomial){
	
	);


int main(){
	float pSave[3];
	int nMin, nMax, nStep;
	ifstream read("KHAOSAT.INP", ios::in);
	while (!read.eof()) {
		read >> pSave[0] >> pSave[1] >> pSave[2] >> nMin >> nMax >> nStep;
	}
	read.close();
	float f[2] = {3, pSave[0]};
	float g[3] = {0, pSave[1], -3};
	float h[4] = {-5, 0 , pSave[2], 7};
	Polynomial oF = Polynomial(2, f);
	Polynomial oG = Polynomial(3, g);
	Polynomial oH = Polynomial(4, h);
}
