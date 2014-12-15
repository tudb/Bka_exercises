#pragma once
#include "Cattle.h"
class Goat : public Cattle{
public:
	Goat();
	~Goat();
	string getSound();
	int getMilk();
	void getChildren();
};

