#pragma once
#include "shapespecial.h"
class Square :	public ShapeSpecial{
public:
	Square();
	Square(Geometry *pGeometry);
	~Square();
	void import();
};

