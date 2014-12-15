#include "Time.h"

Time::Time(){
	m_nHour = 0;
	m_nMinute = 0;
	m_nSecond = 0;
}

Time::Time(int nHour, int nMinute, int nSecond){
	this->m_nHour = nHour;
	this->m_nMinute = nMinute;
	this->m_nSecond = nSecond;
}

Time::~Time(){
	m_nHour = m_nMinute = m_nSecond =0;
}

int Time::getHour(){
	return m_nHour;
}

int Time::getMinute(){
	return m_nMinute;
}

int Time::getSecond(){
	return m_nSecond;
}

void Time::setHour(int nHour){
	this->m_nHour = nHour;
}

void Time::setMinute(int nMinute){
	this->m_nMinute = nMinute;
}

void Time::setSecond(int nSecond){
	this->m_nSecond = nSecond;
}

Time Time::converter(int nSecond){
	Time oTime;
	oTime.setSecond(nSecond % 60);
	oTime.setHour(nSecond / 3600);
	oTime.setMinute((nSecond / 60)-(oTime.getHour() * 60));
	return oTime;
}

int Time::timeToSecond(){
	return (3600 * m_nHour + 60 * m_nMinute + m_nSecond); 
}

Time Time::operator+(const int& nAdd){
	return converter(timeToSecond() + nAdd);
}

Time Time::operator-(const int& nSub){
	return converter(timeToSecond() - nSub);
}

Time Time::operator++(){
	return converter(timeToSecond() + 1);
}

Time Time::operator--(){
	return converter(timeToSecond() + 1);
}

ostream& Time::operator<<(ostream& os){
	cout << m_nHour << " Hour : " << m_nMinute << " Minute : " << m_nSecond << " Second " << endl;
	return os;
}

istream& Time::operator>>(istream& is){
	cout << "Import Hour, Minute, Second : ";
	cin >> m_nHour >> m_nMinute >> m_nSecond;
	return is;
}

