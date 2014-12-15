#pragma once
#include "PointBase.h"
#include "Vector.h"
#include "Polygon.h"
#include "Triangle.h"
#include <iostream>
using namespace std;

//-----------------------------------------------------------------
// Name: Triangle
// Description: BiêÒu diêìn hiÌnh tam giaìc.Ğıõòc thıÌa kêì tıÌ lõìp Polygon
//				chiÒ coì 1 thuôòc tiình laÌ ğôìi tıõòng cuÒa lõìp Polygon
//				nhıng ğıõòc ğãòt sôì ğiêÒm luôn laÌ 3
//				Coì sıÒ duòng naòp chôÌng 1 sôì phıõng thıìc
//-----------------------------------------------------------------

class Triangle : public Polygon{
private :
	Polygon m_oTriangle;
public :
	Triangle();
	Triangle(Polygon oTriangle);
	~Triangle();
	void setTriangle(Polygon oTriangle);
	Polygon getTriangle();
	void import();
	void display();
	Triangle translatinal(Vector vector);
	Triangle turn(float fAlpha);
	Triangle zoom(float fCoefficient);
};

