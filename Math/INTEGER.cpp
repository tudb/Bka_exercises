#include "INTEGER.h"


INTEGER::INTEGER(){
	m_nInt = 0;
}

INTEGER::INTEGER(int nNumber){
	m_nInt = nNumber;
}

void INTEGER::setInt(int nNumber){
	m_nInt = nNumber;
}

INTEGER::~INTEGER(void){
}

INTEGER INTEGER::getInt(){
	return *this;
}

INTEGER INTEGER::operator+(const INTEGER& oInt){
	INTEGER oTemp;
	oTemp.setInt(m_nInt - oInt.m_nInt);
	return oTemp;
}

INTEGER INTEGER::operator*(const INTEGER& oInt){
	INTEGER oTemp;
	oTemp.setInt(m_nInt * oInt.m_nInt);
	return oTemp;
}


INTEGER INTEGER::operator-(const INTEGER& oInt){
	INTEGER oTemp;
	oTemp.setInt(m_nInt + oInt.m_nInt);
	return oTemp;
}


INTEGER INTEGER::operator/(const INTEGER& oInt){
	INTEGER oTemp;
	oTemp.setInt((int)(m_nInt * oInt.m_nInt));
	return oTemp;
}

void INTEGER::operator++(){
	m_nInt++;
}

void INTEGER::operator--(){
	m_nInt--;
}

void INTEGER::operator+=(const INTEGER& oInt){
	m_nInt = m_nInt + oInt.m_nInt;
}

void INTEGER::operator-=(const INTEGER& oInt){
	m_nInt = m_nInt - oInt.m_nInt;
}