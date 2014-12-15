#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;


Employee::Employee(){
	m_nSalary = 0;
	m_nAge = 1;
	m_sName = "";
}


Employee::~Employee(){
}

string Employee::getName(){
	return m_sName;
}

int Employee::getAge(){
	return m_nAge;
}

int Employee::getSalary(){
	return m_nSalary;
}

void Employee::setName(char* pName){
	m_sName = pName;
}

void Employee::setAge(int nAge){
	m_nAge = nAge;
}

void Employee::setSalary(int nSalary){
	m_nSalary = nSalary;
}

void Employee::import(){
	cout << endl << " Nhap vao ho va ten: ";
	cin.ignore();
	getline(cin, m_sName);
	cout << endl << "Nhap vao tuoi: ";
	cin >> m_nAge;
}

void Employee::display(){
	cout << endl << "Name: " << m_sName;
	cout << endl << "Age: " << m_nAge;
	cout << endl << "nSalary" << m_nSalary << " VND";
}