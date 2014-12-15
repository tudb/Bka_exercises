#include "ProductionStaff.h"


ProductionStaff::ProductionStaff(){
	m_nSalaryBase = 0;
	m_nProductAmount = 0;
}


ProductionStaff::~ProductionStaff(){
}

int ProductionStaff::getSalaryBase(){
	return m_nSalaryBase;
}

int ProductionStaff::getProductAmount(){
	return m_nProductAmount;
}

void ProductionStaff::setSalaryBase(int nSalaryBase){
	m_nSalaryBase = nSalaryBase;
}

void ProductionStaff::setProductAmount(int nProductAmount){
	m_nProductAmount = nProductAmount;
}

int ProductionStaff::caculatorSalary(){
	m_nSalary = m_nSalaryBase + m_nProductAmount * 5000;
	return m_nSalary;
}

void ProductionStaff::import(){
	cout << endl << "Nhap so lieu nhan vien san xuat: ";
	Employee::import();
	cout << endl << "Nhap luong co ban: ";
	cin >> m_nSalaryBase;
	cout << endl << "Nhap so san pham: ";
	cin >> m_nProductAmount;
}

void ProductionStaff::display(){
	cout << endl << "Nhan vien san xuat: ";
	m_nSalary = caculatorSalary();
	Employee::display();
	cout << endl << "Luong co ban: " << m_nSalaryBase << " VND";
	cout << endl << "So san pham: " << m_nProductAmount;
}