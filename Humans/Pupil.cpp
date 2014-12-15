#include "Pupil.h"
#include <iostream>
#include <string>
using namespace std;

Pupil::Pupil(){
	m_sSchool = "";
	m_nClass = 1;
}


Pupil::~Pupil(){
}

void Pupil::import(){
	Human::import();
	cout << endl << " School: ";
	cin.ignore();
	getline(cin, m_sSchool);
	cout << endl << " Class: ";
	cin >> m_nClass;
}

void Pupil::display(){
	Human::display();
	cout << endl << " School: ";
	cout << m_sSchool;
	cout << endl << " Class: ";
	cout << m_nClass;
}