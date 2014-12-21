#include "Date.h"

Date::Date(){
	m_nYear = 0;
	m_nMonth = 0;
	m_nDay = 0;
}

Date::Date(int nYear, int nMonth, int nDay){
	this->m_nYear = nYear;
	this->m_nMonth = nMonth;
	this->m_nDay = nDay;
}

Date::~Date(){
	m_nYear = m_nMonth = m_nDay =0;
}

int Date::getYear(){
	return m_nYear;
}

int Date::getMonth(){
	return m_nMonth;
}

int Date::getDay(){
	return m_nDay;
}

void Date::setYear(int nYear){
	this->m_nYear = nYear;
}

void Date::setMonth(int nMonth){
	this->m_nMonth = nMonth;
}

void Date::setDay(int nDay){
	this->m_nDay = nDay;
}

int Date::totalDay(){
	int Calendar[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int nNumber = 0;
	int nTotal = 0;
	while (nNumber < (m_nMonth - 1)){
	if ((nNumber == 1) && (m_nYear % 4) == 0) {
		nTotal += 29;
		nNumber++;	
		continue;
		};
		nTotal += Calendar[nNumber++];
	}
	nTotal += m_nDay;
	return nTotal;
}
Date Date::operator+(const int& nAdd){
	Date oDate;
	int nDay = nAdd;
	int Calendar[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int nYear = nDay / 365;
	int nCount = 0;
	int nNumber;
	for (nNumber = 1; nNumber <= nYear; nNumber++){
		if (((m_nYear + nNumber) % 4 == 0)) nCount++;
	}
	nDay -= nCount + 365 * nYear;
	nNumber = 0;
	int nTotal = totalDay();
	nTotal += m_nDay;
	nTotal += nDay;
	if ((nTotal > 365) && (m_nYear %4 != 0)){
		nTotal -= 365;
		nCount ++;
	}
	while (((nNumber) < 12) && (nTotal > Calendar[nNumber])){
		if ((nNumber == 1) && (m_nYear % 4) == 0) {
			nTotal -= 29;
			nNumber++;
			continue;
		}
		nTotal -= Calendar[nNumber++];
	}
	oDate.setMonth(nNumber);
	oDate.setDay(nTotal - nNumber);
	oDate.setYear(m_nYear + nCount);
	return oDate;
}

Date Date::sub(const int& nSub){
		Date oDate;
	int nDay = nSub;
	int Calendar[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int nYear = nDay / 365;
	int nCount = 0;
	int nNumber;
	for (nNumber = 1; nNumber <= nYear; nNumber++){
		if (((m_nYear - nNumber) % 4 == 0)) nCount++;
	}
	nDay -= nCount + 365 * nYear;
	nNumber = 0;
	int nTotal = 0;
	while (nNumber < (m_nMonth - 1)){
		if ((nNumber == 1) && (m_nYear % 4) == 0) {
			nTotal += 29;
			nNumber++;
			continue;
		}
		nTotal += Calendar[nNumber++];
	}
	nTotal += m_nDay;
	if ((nTotal - nDay) <= 0){
		if ((m_nYear - 1) % 4 == 0){
			nTotal = 366 + nTotal -nDay;
		}
		else 
			nTotal = 365 + nTotal - nDay;
		nCount--;
	}
	else nTotal -= nDay;
	nNumber = 0;
	while (((nNumber) < 12) && (nTotal > Calendar[nNumber])){
		if ((nNumber == 1) && (m_nYear % 4) == 0) {
			nTotal -= 29;
			nNumber++;
			continue;
		}
		nTotal -= Calendar[nNumber++];
	}
	oDate.setMonth(nNumber);
	oDate.setDay(nTotal);
	oDate.setYear(m_nYear - nCount);
	return oDate;
}

void Date::operator++(){
	int Calendar[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if ((m_nMonth == 12) && (m_nDay == 31)){
		if (m_nYear % 4 == 0) m_nYear += 1;
		m_nMonth = 1;
		m_nDay = 1;
	} 
	else {
		m_nDay++; 
	}
}

Date Date::operator-(const Date& oSub){
	Date oDateTemp = oSub;
	Date oDate = Date(m_nYear, m_nMonth, m_nDay);
	int nTotal =oDateTemp.totalDay();
	oDate = oDate.sub(nTotal);
	oDate.setYear(oDate.getYear() - oDateTemp.getYear());
	return oDate;
}

void Date::operator--(){
	int Calendar[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (m_nDay == 1){
		if (m_nMonth == 1) {
			m_nYear -= 1;
			m_nMonth = 12;
		} else
		m_nMonth--;
		m_nDay = 31;

	} 
	else 
		m_nDay--;
}

ostream& Date::operator<<(ostream& os){
	cout << m_nYear << " Year : " << m_nMonth << " Month : " << m_nDay << " Day  " << endl;
	return os;
}

istream& Date::operator>>(istream& is){
	cout << "Import Year, Month, Day : ";
	cin >> m_nYear >> m_nMonth >> m_nDay;
	return is;
}
