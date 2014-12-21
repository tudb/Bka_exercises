#pragma once

//-----------------------------------------------------------------
//Description: Môn phỏng vector hình học nhiều chiều cùng các phép toán cơ bản
//-----------------------------------------------------------------

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

