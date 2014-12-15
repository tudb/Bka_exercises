#pragma once

//-----------------------------------------------------------------
// Name: Vector
// Description: BiêÒu diêŞn toòa ğôò cuÒa cuÒa 1 vector gôÌm 2 thuôòc tiình laÌ
//				hoaÌnh ğôò vaÌ tung ğôò
//				Caìc phıõng thıìc khõÒi taòo vaÌ nhâòp toòa ğôò
//-----------------------------------------------------------------

class Vector{
public:
	float m_fAbscissa;
	float m_fOrdane;
public:
	Vector();
	Vector(float m_fAbscissa, float m_fOrdane);
	void import();
	~Vector();
};

