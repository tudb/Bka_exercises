#include "Polygon.h"
#include "PointBase.h"
#include <iostream>
using namespace std;

//KhõÒi taòo cho lõìp Polygon
Polygon::Polygon() {
	m_byAmount = 3;
	m_pPolygon = new PointBase[m_byAmount];
}

//KhõÒi taòo coì ğôìi cho lõìp Polygon
Polygon::Polygon(int amount, PointBase *pointBase){
	this->m_byAmount = amount;
	this->m_pPolygon = pointBase;
}

//HaÌm huÒy
Polygon::~Polygon(){
//	delete (this->m_pPolygon);
}

//Lâìy giaì triò cuÒa biêìn m_byAmount, traÒ vêÌ kiêÒu int; 
int Polygon::getAmount(){

	return m_byAmount;
}

//Ğãòt giaì triò cho biêìn m_byAmount
void Polygon::setAmount(int m_byAmount){
	this->m_byAmount = m_byAmount;
}

void Polygon::setPolygon(PointBase *m_pPolygon){
	this->m_pPolygon = m_pPolygon;
}

//Lâìy ra con troÒ maÒng troÒ tõìi vuÌng nhõì cuÒa toòa ğôò caìc ğiêÒm cuÒa ğa giaìc
PointBase* Polygon::getPolygon(){
	PointBase *pPolygonTemp;
	pPolygonTemp = m_pPolygon;

	return pPolygonTemp;
}

//Nhâòp giaì triò vaÌo cho môŞi ğôìi tıõòng Polygon 
void Polygon::import(){
	cout << "Nhap so diem cua da giac: ";
	cin >> m_byAmount;
	cout << endl << "Nhap toa do: " << endl;
	for (int nNum = 0; nNum < m_byAmount; nNum++){
		cout << "Point " << nNum+1 << " : " << endl;
		m_pPolygon[nNum].import();
	}
}

//HiêÒn thiò thông tin toòa ğôò caìc ğiêÒm cuÒa ğa giaìc
void Polygon::display(){
	cout << "Toa do cac diem cua da giac co " << m_byAmount << "canh : " << endl;
	for (int nNum = 0; nNum < m_byAmount; nNum++){
		cout << "Point " << nNum+1 << " : " << endl;
		m_pPolygon[nNum].display();
	}
}
 //Tiònh tiêìn hiÌnh ğa giaìc theo môòt vector ğıõòc nhâòp vaÌo
Polygon Polygon::translatinal(Vector vector){
	Polygon oPolygon;
	oPolygon.setAmount(m_byAmount);
	oPolygon.setPolygon(m_pPolygon);
	for (int nNum = 0; nNum < m_byAmount; nNum++){
 		oPolygon.getPolygon()[nNum] = m_pPolygon[nNum].translatinal(vector);
	}
	return oPolygon;
}

//Quay ğa giaìc theo 1 goìc xaìc ğiònh bõÒi goìc fAlpha
Polygon Polygon::turn(float fAlpha){
	Polygon oPolygon;
	for (int nNum = 0; nNum < m_byAmount; nNum++){
		oPolygon.m_pPolygon[nNum] = m_pPolygon[nNum].turn(fAlpha);
	}

	return oPolygon;
}


//Phoìng to thu nhoÒ ğa giaìc bãÌng hêò sôì fCoefficient
Polygon Polygon::zoom(float fCoefficient){
	Polygon oPolygon;
	for (int nNum = 0; nNum <= m_byAmount; nNum++){
		oPolygon.m_pPolygon[nNum] = m_pPolygon->zoom(fCoefficient);
	}

	return oPolygon;
}


