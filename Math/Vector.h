#pragma once
class Vector{
private:
	int m_nSide;
	float *m_fVector;
public:
	Vector();
	Vector(float m_fAbscissa, float m_fOrdane);
	float* getVector();
	int getSide();
	void import();
	~Vector();
	float getLength();
};

