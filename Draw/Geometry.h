#pragma once
#include <iostream>

class Geometry{
protected:
	float m_fAbscissa;
	float m_fOrdane;
public:
	Geometry();
	~Geometry();
	float getAbscissa();
	float getOrdane();
	virtual void import() = 0;
	virtual void display() = 0;
	virtual void draw() = 0;
};

