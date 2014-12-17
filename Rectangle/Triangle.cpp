#include "Triangle.h"
using namespace std;


Triangle::Triangle(){
	m_pPoint = new PointBase[3];
}


Triangle::~Triangle(){
	delete (m_pPoint);
}

Triangle::Triangle(PointBase *pPoint){
	m_pPoint = pPoint;
}

PointBase* Triangle::getPoint(){
	return m_pPoint;
}

void Triangle::setPoint(PointBase *pPoint){
	m_pPoint = pPoint;
}

Rectangle Triangle::getForce(){
	Rectangle oTemp;
	PointBase oPoint;
	float fMinA = m_pPoint[0].getAbscissa();
	float fMaxO = m_pPoint[0].getOrdane();
	for (int nCount = 1; nCount < 3; nCount++){
		if (m_pPoint[nCount].getAbscissa() < fMinA) fMinA = m_pPoint[nCount].getAbscissa();
		if (m_pPoint[nCount].getOrdane() > fMaxO) fMaxO = m_pPoint[nCount].getOrdane();
	}
	oPoint.setAbscissa(fMinA);
	oPoint.setOrdane(fMaxO);
	float fMaxA = m_pPoint[0].getAbscissa();
	float fMinO = m_pPoint[0].getOrdane();
	for (int nCount = 1; nCount < 3; nCount++){
		if (m_pPoint[nCount].getAbscissa() > fMinA) fMaxA = m_pPoint[nCount].getAbscissa();
		if (m_pPoint[nCount].getOrdane() < fMaxO) fMinO = m_pPoint[nCount].getOrdane();
	}	
	oTemp.setLength(abs(fMaxA - fMinA));
	oTemp.setWidth(abs(fMaxO - fMinO));
	oTemp.setPoint(oPoint);
	return oTemp;
}
vector<Triangle> Triangle::ListTriangle(string sFile){
	vector<Triangle> List;
	char key;
	ifstream read(sFile, ios::in);
	while (!read.eof()){
		read >> key;
		Triangle oTemp;
		float fAbscissa[3];
		float fOrdane[3];
		PointBase oPoint[3];
		if (!isdigit(key)) 
			if (key == 'G') {
				for (int nCount = 0; nCount < 3; nCount ++){
				read >> fAbscissa[nCount] >> fOrdane[nCount];
				oPoint[nCount].setAbscissa(fAbscissa[nCount]);
				oPoint[nCount].setOrdane(fOrdane[nCount]);
				}
				oTemp.setPoint(oPoint);
				List.push_back(oTemp);
			}
	}
	read.close();
	return List;
}

