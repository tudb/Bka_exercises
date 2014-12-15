#include "Employee.h"
#include "OfficeStaff.h"
#include "ProductionStaff.h"
#include <windows.h>
#include <iostream>
using namespace std;	

int main(){
	OfficeStaff oOfficeStaff[100];
	ProductionStaff oProductionStaff[100];
	int nOffice;
	int nProduction;
	cout << endl << "Nhap so nhan vien van phong: ";
	cin >> nOffice;
	cout << endl << "Nhap so nhan vien san xuat: ";
	cin >> nProduction;
	if (nOffice > 0) 
	for (int nNumber = 0; nNumber < nOffice; nNumber++){
		cout << endl << "Nhap so lieu nhan vien thu " << nNumber + 1 << " : ";
		oOfficeStaff[nNumber].import();
	}
	if (nProduction > 0)
	for (int nNumber = 0; nNumber < nProduction; nNumber++){
		cout << endl << "Nhap so lieu nhan vien thu " << nNumber + 1 << " : ";
		oProductionStaff[nNumber].import();
	}
	if (nOffice > 0)
	for (int nNumber = 0; nNumber < nOffice; nNumber++){
		cout << endl << "Thong tin nhan vien thu " << nNumber + 1 << " : ";
		oOfficeStaff[nNumber].display();
	}
	if (nProduction > 0)
	for (int nNumber = 0; nNumber < nProduction; nNumber++){
		cout << endl << "Thong tin nhan vien thu " << nNumber + 1 << " : ";
		oProductionStaff[nNumber].display();
	}
	system("pause");
}