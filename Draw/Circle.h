#pragma once
#include "Geometry.h"
#include <iostream>

class Circle : public Geometry{
private:
	float m_fRadius;
public:
	Circle();
	Circle(float fAbscissa, float fOrdane, float fRadius);
	~Circle();
	float getRadius();
	void setRadius(float fRadius);
	void import();
	void display();
	void draw();
};

