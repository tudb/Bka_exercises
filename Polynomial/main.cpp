#include "Polynomial.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
using namespace std;

void writeTitle(string sFile, int nCount,float *pNumber){
	ofstream writec(sFile, ios::out|ios::app);
	writec << endl;
	for (int nCountT =0; nCountT < nCount; nCountT++)
		writec <<  *(pNumber + nCountT) << " ";
	writec << endl;
	writec.close();
}
void writef(string sFile, float *fSave, int nAmount,  Polynomial oPolynomial){
	ofstream write(sFile , ios::app|ios::out);
	for (int nCount =0; nCount < nAmount; nCount++){
		write << oPolynomial.Calculator(*(fSave + nCount)) << " ";
	}
	write << endl;
	write.close();
}

void writeg(string sFile, float *fSave,int nAmount, Polynomial oPolynomial){
	ofstream write(sFile , ios::app|ios::out);
	for (int nCount =0; nCount < nAmount; nCount++){
		write << oPolynomial.Calculator(*(fSave + nCount)) << " ";
	}
	write << endl;
	write.close();
}

void writeh(string sFile, float *fSave,int nAmount, Polynomial oPolynomial){
	ofstream write(sFile , ios::app|ios::out);
	for (int nCount =0; nCount < nAmount; nCount++){
		write << oPolynomial.Calculator(*(fSave + nCount)) << " ";
	}
	write << endl;
	write.close();
}

void write(void (*functocall)(string, float*,int ,Polynomial), string sFile, float *fSave,int nAmount, Polynomial oPolynomial){
		(*functocall)(sFile, fSave, nAmount, oPolynomial);
}

int main(){
	float pSave[3];
	float *a;
	a = new float[10];
	int nMin, nMax, nStep;
	ifstream read("KHAOSAT.INP", ios::in);
	while (!read.eof()) {
		read >> pSave[0] >> pSave[1] >> pSave[2] >> nMin >> nMax >> nStep;
	}
	float pNumber[10];
	int nCount = 0;
	while (1){
		pNumber[nCount] = nMin +nCount * nStep;
		if ((pNumber[nCount++] + nStep) > nMax) break; 
	}
	read.close();
	float f[] = {-3, pSave[0]};
	float g[] = {0, pSave[1], -3};
	float h[] = {-5, 0 , pSave[2], 7};
	Polynomial oF = Polynomial(1, f);
	Polynomial oG = Polynomial(2, g);
	Polynomial oH = Polynomial(3, h);
	string sOut = "KHAOSAT.OUT";
	void (*fPoint)(string ,float*,int ,Polynomial) = writef;
	void (*gPoint)(string ,float*,int ,Polynomial) = writeg;
	void (*hPoint)(string ,float*,int ,Polynomial) = writeh;
	writeTitle(sOut, nCount, pNumber);
	write(fPoint, sOut, pNumber, nCount, oF);
	write(gPoint, sOut, pNumber, nCount, oG);
	write(hPoint, sOut, pNumber, nCount, oH);
	writeTitle(sOut, nCount, pNumber);
	oF.writeDeri(sOut, pNumber, nCount);
	oG.writeDeri(sOut, pNumber, nCount);
	oH.writeDeri(sOut, pNumber, nCount);
	system("pause");
	return 0;
}
