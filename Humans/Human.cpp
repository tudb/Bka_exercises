#include "Human.h"
#include <iostream>
#include <string>
using namespace std;


Human::Human(){
	m_nAge = 1;
	m_sName = "";
}


Human::~Human(){
}

string Human::getName(){
	return m_sName;
}

int Human::getAge(){
	return m_nAge;
}

void Human::setName(string pName){
	m_sName = pName;
}

void Human::setAge(int nAge){
	m_nAge = nAge;
}

void Human::import(){
	cout << endl << " Nhap vao ho va ten: ";
	cin.ignore();
	getline(cin, m_sName);
	cout << endl << "Nhap vao tuoi: ";
	cin >> m_nAge;
}

void Human::display(){
	cout << endl << "Name: " << m_sName;
	cout << endl << "Age: " << m_nAge;
}