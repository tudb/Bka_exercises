#pragma once
#include "Geometry.h"
#include "graphics.h"
#include <iostream>

class ShapeSpecial{
protected:
	Geometry m_pPoint[4];
public:
	ShapeSpecial(void);
	~ShapeSpecial(void);
	Geometry* getPoint();
	void setPoint(Geometry *pGeometry);
	void import();
	void draw();
};

