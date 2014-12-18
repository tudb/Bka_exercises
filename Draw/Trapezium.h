#pragma once
#include "shapespecial.h"
class Trapezium : public ShapeSpecial{
public:
	Trapezium();
	Trapezium(Geometry *pGeometry);
	~Trapezium();
	void setPoint(Geometry *pGeometry);
	void import();
};

