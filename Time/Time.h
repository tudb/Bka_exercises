#pragma once
#include <iostream>

using namespace std;

class Time{
private:
	int m_nHour;
	int m_nMinute;
	int m_nSecond;
public:
	Time();
	Time(int nHour, int nMinute, int nSecond);
	~Time();
	int getHour();
	int getMinute();
	int getSecond();
	void setHour(int nHour);
	void setMinute(int nMinute);
	void setSecond(int nSecond);
	Time operator+(const int& nAdd);
	Time operator-(const int& nSub);
	void operator++();
	void operator--();
	ostream& operator<<(ostream& os);
	istream& operator>>(istream& is);
	Time converter(int nSecond);	
	int timeToSecond();
	friend class TimeSpan;
};