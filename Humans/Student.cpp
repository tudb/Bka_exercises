#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(){
	m_sJob = "";
	m_sUniversity = "";
	m_sMajor = "";
}


Student::~Student(){
}

void Student::import(){
	Human::import();
	cout << endl << " Job: ";
	cin.ignore();
	getline(cin, m_sJob);
	cout << endl << " University: ";
	cin.ignore();
	getline(cin, m_sUniversity);
	cout << endl << " Major: ";
	cin.ignore();
	getline(cin, m_sMajor);
}

void Student::display(){
	Human::display();
	cout << endl << " Job: ";
	cout << m_sJob;
	cout << endl << " University: ";
	cout << m_sUniversity;
	cout << endl << " Major: ";
	cout << m_sMajor;
}