#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <string>

class Room{
protected:
	string m_sID;
	int m_nNight;
public:
	Room();
	Room(int nNight);
	~Room();
	void import(string sID, int nAmount);
	virtual void display() = 0; 
	virtual int CalculatorFree() = 0;
};

