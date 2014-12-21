#include "TimeSpan.h"


TimeSpan::TimeSpan(void){
}


TimeSpan::~TimeSpan(void){
}

void TimeSpan::import(){
	cout << endl << "Nhap vao khoang thoi gian: ";
	cout << endl << "Nhap vao gio: ";
	cin >> m_oSpan.m_nHour;
	cout << endl << "Nhap vao phut: ";
	cin >> m_oSpan.m_nMinute;
	cout << endl << "Nhap vao giay: ";
}

Time TimeSpan::getSpan(){
	return m_oSpan;
}

void TimeSpan::setTime(Time oTime){
	m_oSpan = oTime;
}

TimeSpan TimeSpan::operator+(const TimeSpan& oSpan){
	Time oTime;
	TimeSpan oTemp;
	oTime = oSpan.m_oSpan;
	oTemp.m_oSpan = m_oSpan.operator+(oTime.timeToSecond());
	return oTemp;
}

TimeSpan TimeSpan::operator-(const TimeSpan& oSpan){
	Time oTime;
	TimeSpan oTemp;
	oTime = oSpan.m_oSpan;
	oTemp.m_oSpan = m_oSpan.operator-(oTime.timeToSecond());
	return oTemp;
}
 
void TimeSpan::operator++(){
	m_oSpan.operator++();
}

void TimeSpan::operator--(){
	m_oSpan.operator--();
}