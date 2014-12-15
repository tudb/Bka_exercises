#pragma once
#include "PointBase.h"

//-----------------------------------------------------------------
// Name: Polygon
// Description: BiêÒu diêŞn lõìp ğa giaìc, kêì thıÌa caìc phıõng thıìc cuÒa 
//				lõìp PointBase, gôÌm 2 thuôòc tiình laÌ m_byAmuont: sôì ğiêÒm
//				cuÒa ğa giaìc, con troÒ m_pPolygon troÒ tõìi maÒng gôÌm m_byAmount
//				ğiêÒm laÌ ğôìi tıõòng cuÒa lõìp PointBase
//-----------------------------------------------------------------

class Polygon : public PointBase{
private :
	int m_byAmount;
	PointBase *m_pPolygon;
public :
	Polygon();
	Polygon(int m_byAmount, PointBase *m_pPolygon);
	~Polygon();
	int getAmount();
	void setAmount(int m_byAmount);
	void setPolygon(PointBase *m_pPolygon);
	PointBase* getPolygon();
	void import();
	void display();
	Polygon translatinal(Vector vector);
	Polygon turn(float fAlpha);
	Polygon zoom(float fCoefficient);
};

