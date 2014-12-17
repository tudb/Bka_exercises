#include "PointBase.h"


PointBase::PointBase(){
	m_fAbscissa = 0;
	m_fOrdane = 0;
}

PointBase::PointBase(float fAbscissa, float fOrdane){
	m_fAbscissa = fAbscissa;
	m_fOrdane = fOrdane;
}

PointBase::~PointBase(void)
{
}
