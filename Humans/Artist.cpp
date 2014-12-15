#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

Artist::Artist(){
	m_sKind = "";
}


Artist::~Artist(){
}

void Artist::import(){
	Human::import();
	cout << endl << " Kind: ";
	cin.ignore();
	getline(cin, m_sKind);
}

void Artist::display(){
	Human::display();
	cout << endl << " Kind: ";
	cout << m_sKind;
}