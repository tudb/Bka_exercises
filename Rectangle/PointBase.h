#pragma once
class PointBase{
private:
	float m_fAbscissa;
	float m_fOrdane;
public:
	PointBase();
	PointBase(float fAbscissa, float fOrdane);
	~PointBase();
	float getAbscissa();
	float getOrdane();
	void setAbscissa(float fAbsciassa);
	void setOrdane(float fOrdane);
};

