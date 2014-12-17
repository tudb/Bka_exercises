#include "Rectangle.h"
using namespace std;

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

Rectangle::~Rectangle(){
}

float Rectangle::getLength(){
	return m_fLength;
}

float Rectangle::getWidth(){
	return m_fWidth;
}

PointBase Rectangle::getPoint(){
	return m_oPoint;
}

void Rectangle::setLength(float fLength){
	m_fLength = fLength;
}

void Rectangle::setWidth(float fWidth){
	m_fWidth = fWidth;
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

void Rectangle::write(string sFile){
	ofstream check(sFile);
	ofstream write;
	if (!check)
		write.open(sFile, ios::out);
	else 
		write.open(sFile, ios::ate);
	if (write.is_open()) {
		write << m_oPoint.getAbscissa() << "  " << m_oPoint.getOrdane()<< "  " << m_fLength<< "  " << m_fWidth <<endl;
		write.close();
		cout << "Complete" << endl;
	}
	else cout << "Cannot open file" << endl;
}
