#pragma once
#include "Cattle.h"


class Sheep : public Cattle{
public:
	Sheep();
	~Sheep();
	string getSound();
	int getMilk();
	void getChildren();
};

