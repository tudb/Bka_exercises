#pragma once
#include "room.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Business : public Room{
public:
	Business(void);
	~Business(void);
	void import(string sID, int nAmount);
	void display();
	int CalculatorFree();
	vector<Business> getList(string sFile, int nStart, int nEnd);
};

