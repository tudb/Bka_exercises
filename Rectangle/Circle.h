#pragma once
#include "Rectangle.h"
#include "PointBase.h"
#include <iostream>
class Circle{
private:
	PointBase m_oCentre;
	float m_fRadius;
public:
	Circle();
	Circle(PointBase oPoint, float fRadius);
	~Circle(void);
	PointBase getCentre();
	float getRadius();
	void setCentre(PointBase oPoint);
	void setRadius(float fRadius);
	Rectangle getForce();
};

