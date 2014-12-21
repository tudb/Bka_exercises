#pragma once
#include "Time.h"
#include <iostream>
#include <Windows.h>
#include "Date.h"
#include <string>
using namespace std;

class TimeSpan{
	Time m_oSpan;
public:
	TimeSpan(void);
	~TimeSpan(void);
	void import();
	void operator++();
	void operator--();
	void setTime(Time oTime);
	TimeSpan operator-(const TimeSpan& oSpan);
	TimeSpan operator+(const TimeSpan& oSpan);
	Time getSpan();
};

