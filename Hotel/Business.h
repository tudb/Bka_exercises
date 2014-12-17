#pragma once
#include "room.h"
class Business : public Room{
public:
	Business(void);
	~Business(void);
	void import();
	void display();
	int CalculatorFree();
};

