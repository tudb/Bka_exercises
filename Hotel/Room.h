#pragma once
#include <string>
#include <iostream>
class Room{
protected:
	string m_sID;
	int m_nNight;
public:
	Room();
	Room(int nNight);
	~Room();
	void import();
	virtual void display() = 0; 
	virtual int CalculatorFree() = 0;
};

