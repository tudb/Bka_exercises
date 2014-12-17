#include "Rectangle.h"

Rectangle::Rectangle(){
	m_fLength = 0;
	PointBase(0,0);
	m_fWidth = 0;
}


Rectangle::Rectangle(PointBase oPoint, float fLength, float fWidth){
	m_oPoint = oPoint;
	m_fLength = fLength;
	m_fWidth = fWidth;
}

Rectangle::~Rectangle(void){
}
 void Rectangle::setPoint(PointBase oPoint){
	 m_oPoint = oPoint;
 }

Rectangle Rectangle::combine(Rectangle& oRetangle){
	Rectangle oTemp;
	float fMinAbscissa;
	float fMaxOrdane;
	fMinAbscissa = (oRetangle.m_oPoint.getAbscissa() >= m_oPoint.getAbscissa()) ? m_oPoint.getAbscissa() : oRetangle.m_oPoint.getAbscissa();
	fMaxOrdane = (oRetangle.m_oPoint.getOrdane() >= m_oPoint.getOrdane()) ? oRetangle.m_oPoint.getOrdane() : m_oPoint.getOrdane();
	PointBase oPoint(fMinAbscissa, fMaxOrdane);
	oTemp.setPoint(oPoint);
	float fLength;
	float fWidth;
	fLength = (oRetangle.m_oPoint.getAbscissa() + oRetangle.getLength());
	fWidth = (oRetangle.m_oPoint.getOrdane() + oRetangle.getWidth());
	fLength = (fLength > (m_oPoint.getAbscissa() + m_fLength)) ? fLength : m_fLength;
	fWidth = (fWidth > (m_oPoint.getOrdane() + m_fWidth)) ? fWidth : m_fWidth;
	oTemp.setLength(fLength);
	oTemp.setWidth(fWidth);
	return oTemp;
}

vector<Rectangle> Rectangle::ListRectangle(string sFile){
	vector<Rectangle> List;
	char key;
	ifstream read(sFile, ios::in);
	while (!read.eof()){
		read >> key;
		Rectangle oTemp;
		float fAbscissa;
		float fOrdane;
		PointBase oPoint;
		float fLength;
		float fWidth;
		if (!isdigit(key)) 
			if (key == 'C') {
				read >> fAbscissa >> fOrdane >> fLength >> fWidth;
				oPoint.setAbscissa(fAbscissa);
				oPoint.setOrdane(fOrdane);
				oTemp.setPoint(oPoint);
				oTemp.setLength(fLength);
				oTemp.setWidth(fWidth);
				List.push_back(oTemp);
			}
	}
	read.close();
	return List;
}

