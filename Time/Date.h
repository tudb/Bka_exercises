#pragma once
#include <iostream>

using namespace std;

class Date{
private:
	int m_nYear;
	int m_nMonth;
	int m_nDay;
public:
	Date();
	Date(int nYear, int nMonth, int nDay);
	~Date();
	int getYear();
	int getMonth();
	int getDay();
	void setYear(int nYear);
	void setMonth(int nMonth);
	void setDay(int nDay);
	Date operator+(const int& nAdd);
	Date operator-(const Date& oSub);
	Date sub(const int& nSub);
	int totalDay();
	void operator++();
	void operator--();
	ostream& operator<<(ostream& os);
	istream& operator>>(istream& is);
};