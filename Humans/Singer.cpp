#include "Singer.h"
#include <iostream>
#include <string>
using namespace std;

Singer::Singer(){
	m_sKindMusic = "";
	m_sCompany = 1;
}


Singer::~Singer(){
}

void Singer::import(){
	Human::import();
	cout << endl << " KindMusic: ";
	cin.ignore();
	getline(cin, m_sKindMusic);
	cout << endl << " Company: ";
	cin >> m_sCompany;
}

void Singer::display(){
	Human::display();
	cout << endl << " KindMusic: ";
	cout << m_sKindMusic;
	cout << endl << " Company: ";
	cout << m_sCompany;
}