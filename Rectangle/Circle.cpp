#include "Circle.h"
using namespace std;

Circle::Circle(){
	m_fRadius = 0;
}

Circle::Circle(PointBase oPoint, float fRadius){
	m_oCentre = oPoint;
	m_fRadius = fRadius;
}

Circle::~Circle(){
}

PointBase Circle::getCentre(){
	return m_oCentre;
}

float Circle::getRadius(){
	return m_fRadius;
}

void Circle::setCentre(PointBase oPoint){
	m_oCentre = oPoint;
}

void Circle::setRadius(float fRadius){
	m_fRadius = fRadius;
}

Rectangle Circle::getForce(){
	Rectangle oTemp;
	oTemp.setLength(2 * m_fRadius);
	oTemp.setWidth(2 * m_fRadius);
	PointBase oPoint(m_oCentre.getAbscissa() - m_fRadius, m_oCentre.getOrdane() - m_fRadius);
	oTemp.setPoint(oPoint);
	return oTemp;
}

vector<Circle> Circle::ListCircle(string sFile){
	vector<Circle> List;
	char key;
	ifstream read(sFile, ios::in);
	while (!read.eof()){
		read >> key;
		Circle oTemp;
		float fAbscissa;
		float fOrdane;
		PointBase oPoint;
		float fRadius;
		if (!isdigit(key)) 
			if (key == 'T') {
				read >> fAbscissa >> fOrdane >> fRadius;
				oPoint.setAbscissa(fAbscissa);
				oPoint.setOrdane(fOrdane);
				oTemp.setCentre(oPoint);
				oTemp.setRadius(fRadius);
				List.push_back(oTemp);
			}
	}
	read.close();
	return List;
}