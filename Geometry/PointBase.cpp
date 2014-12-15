#include "PointBase.h"
#include "Vector.h"
#include <math.h>
#include <iostream>
using namespace std;

//KhõÒi taòo không ğôìi cho PointBase
PointBase::PointBase(){
	this->m_fAbscissa = 0;
	this->m_fOrdane = 0;
}

//KhõÒi taòo coì ğôìi cho PointBase
PointBase::PointBase(float m_fAbscissa, float m_fOrdane){
	this->m_fAbscissa = m_fAbscissa;
	this->m_fOrdane = m_fOrdane;
}

//haÌm huÒy cho PointBase
PointBase::~PointBase(){
}

//HaÌm traÒ vêÌ giaì triò cuÒa hoaÌnh ğôò
float PointBase::getAbscissa(){
	return m_fAbscissa;
}

//HaÌm traÒ vêÌ giaì triò cuÒa tung ğôò
float PointBase::getOrdane(){
	return m_fOrdane;
}

//HaÌn ğãòt giaì triò cho hoaÌnh ğôò
void PointBase::setAbscissa(float m_fAbscissa){
	this->m_fAbscissa = m_fAbscissa;
}

//HaÌm ğãòt giaì triò cho tung ğôò
void PointBase::setOrdane(float m_fOrdane){
	this->m_fOrdane = m_fOrdane;
}

//HaÌm tiònh tiêìn 1 ğiêÒm theo 1 vector coi O laÌ gôìc
PointBase PointBase::translatinal(Vector vector){
	PointBase pointBase;
	pointBase.setAbscissa(vector.m_fAbscissa + m_fAbscissa);
	pointBase.setOrdane(vector.m_fOrdane + m_fOrdane);

	return pointBase;
}

//HaÌm xoay 1 ğiêÒm theo tâm O võìi goìc fAlpha
PointBase PointBase::turn(float fAlpha){
	PointBase pointBase;
	pointBase.setAbscissa(m_fAbscissa * cos(fAlpha) - m_fOrdane * sin(fAlpha));
	pointBase.setOrdane(m_fAbscissa * sin(fAlpha) + m_fOrdane * cos(fAlpha));

	return pointBase;
}

//ChiÒnh toòa ğôò 1 ğiêÒm giaÒ sıÒ võìi pheìp tãng cuÒa ğiêÒm thuôòc môòt hiÌnh
PointBase PointBase::zoom(float fCoefficient){
	PointBase oPointBase;
	oPointBase.setAbscissa(m_fAbscissa * fCoefficient);
	oPointBase.setOrdane(m_fOrdane * fCoefficient);
	return oPointBase;
}

//HiêÒn thiò toòa ğôò cuÒa ğiêÒm
void PointBase::display(){
	cout << "Abscissa : " << m_fAbscissa << endl;
	cout << "Ordane : " << m_fOrdane << endl;
}

// Nhâòp vaÌo toòa ğôò cuÒa caìc ğiêÒm
void PointBase::import(){
	cout << "Abscissa: " << endl;
	cin >> m_fAbscissa;
	cout << "Ordane: " << endl;
	cin >> m_fOrdane;
}
