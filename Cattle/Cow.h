#pragma once
#include "Cattle.h"
#include <iostream>
using namespace std;

class Cow :	public Cattle{
public:
	Cow();
	~Cow();
	string getSound();
	int getMilk();
	void getChildren();
};

