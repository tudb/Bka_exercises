#pragma once
#include "shapespecial.h"
class RectangleFake : public ShapeSpecial{
public:
	RectangleFake();
	RectangleFake(Geometry *pGeometry);
	~RectangleFake();
	void import();
};

