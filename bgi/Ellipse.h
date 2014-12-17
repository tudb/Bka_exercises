#pragma once
#include "Geometry.h"
#include <iostream>

class Ellipse : public Geometry{
private:
	float m_fRow;
	float m_fColumn;
public:
	Ellipse();
	Ellipse(float nAbscissa, float fOrdane, float fRow, float fColumn);
	~Ellipse();
	float getRow();
	float getColumn();
	void setRow(float fRow);
	void setColumn(float fColumn);
	void import();
	void display();
};

