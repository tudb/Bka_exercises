#include "String.h"
#include <iostream>
using namespace std;

String::String(){
	m_nSizeMax = 100;
	m_pString = new char[m_nSizeMax];
}

String::String(int nSize, String *pString){
	m_nSizeMax = nSize;
	m_pString = new char[nSize];
}

String::~String(){
	delete (m_pString);
}

int String::getSizeMax(){
	return m_nSizeMax;
}

 char* String::getString(){
	return m_pString;
}

void String::setSizeMax(int nSizeMax){
	this->m_nSizeMax = nSizeMax;
}

void String::setString(char* string){
	this->m_pString = string;
}

void String::import(){
	cout << "Import size max: " ;
	cin >> m_nSizeMax;
	cout << endl << "Import String: ";
	cin >> m_pString;
}

int String::size(){
	int nNumber = 0;
	for (nNumber = 0; nNumber < m_nSizeMax;nNumber++){
		if (m_pString[nNumber] = NULL) break;
	}
	return nNumber;
}

bool String::operator<(String oString){
	if (strncmp(m_pString, oString.getString(), 3) < 0)
		return true;
	else return false;
}

bool String::operator>(String oString){
	if (strncmp(m_pString, oString.getString(), 3) > 0)
		return true;
	else return false;
}

bool String::operator=(String oString){
	if (strncmp(m_pString, oString.getString(), 3) == 0)
		return true;
	else return false;
}