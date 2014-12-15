#pragma once
#include "PointBase.h"
#include "Vector.h"
#include <math.h>

//-----------------------------------------------------------------
// Name: PointBase
// Description: BiêÒu diêŞn ğiêÒm trong hiÌnh hoòc, gôÌm 2 thuôòc tiình laÌ
//				tung ğôò vaÌ hoaÌnh ğôò. CuÌng caìc phıõng thıìc lâìy toòa ğôò,
//				ğãòt giaì triò ğiêÒm, tiònh tiêìn, xoay ğiêÒm theo gôìc O,
//				xuâìt môòt ğiêÒm.
//-----------------------------------------------------------------

class PointBase{
	float m_fAbscissa;
	float m_fOrdane;
public:
	PointBase::PointBase();
	PointBase(float m_fAbscissa, float m_fOrdane);
	~PointBase();
	float getAbscissa();
	float getOrdane();
	void setAbscissa(float m_fAbscissa);
	void setOrdane(float m_fOrdane);
	PointBase translatinal(Vector vector);
	PointBase turn(float fAlpha);
	PointBase zoom(float fCoefficient);
	void display();
	void import();
};

