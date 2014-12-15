#include "OfficeStaff.h"


OfficeStaff::OfficeStaff(){
	m_nWorkDay = 0;
}


OfficeStaff::~OfficeStaff(){
}

int OfficeStaff::getWorkDay(){
	return m_nWorkDay;
}

void OfficeStaff::setWorkDay(int nWorkDay){
	m_nWorkDay = nWorkDay;
}

int OfficeStaff::caculatorSalary(){
	m_nSalary = m_nWorkDay * 100000;
	return m_nSalary;
}

void OfficeStaff::import(){
	cout << endl << "Nhap so lieu nhan vien van phong: ";
	Employee::import();
	cout << endl << "Nhap so ngay lam viec: ";
	cin >> m_nWorkDay;
}

void OfficeStaff::display(){
	cout << endl << "Nhan vien van phong: ";
	m_nSalary = caculatorSalary();
	Employee::display();
	cout << endl << "WorkDay: " << m_nWorkDay;
}