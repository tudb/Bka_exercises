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
	void setOrdane(float fOrdane);
	void setAbscissa(float fAbscissa);
	void import();
	virtual void display();
	virtual void draw();
};
