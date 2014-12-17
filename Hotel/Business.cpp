#include "Business.h"


Business::Business(){
}


Business::~Business(){
}

void Business::import(){
	Room::import();
}

void Business::display(){
	Room::display();
}

int Business::CalculatorFree(){
	return m_nNight * 300000;
}
