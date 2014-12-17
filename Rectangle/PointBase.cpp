#include "PointBase.h"


PointBase::PointBase(){
	m_fAbscissa = 0;
	m_fOrdane = 0;
}

PointBase::PointBase(float fAbscissa, float fOrdane){
	m_fAbscissa = fAbscissa;
	m_fOrdane = fOrdane;
}

PointBase::~PointBase(){
}

float PointBase::getAbscissa(){
	return m_fAbscissa;
}

float PointBase::getOrdane(){
	return m_fOrdane;
}

void PointBase::setAbscissa(float fAbscissa){
	m_fAbscissa = fAbscissa;
}

void PointBase::setOrdane(float fOrdane){
	m_fOrdane = fOrdane;
}
