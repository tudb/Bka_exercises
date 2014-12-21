#pragma once
#include <iostream>

//-----------------------------------------------------------------
// Description: Biểu diễn tọa độ 1 điểm với thuộc tính: tung độ
//hoành độ, các phương thức: set, get tọa độ ,nhập , có 2 phương
// thức ảo được tường minh ở các lớp con của nó: hiển thị và vẽ
//-----------------------------------------------------------------


class Geometry{
protected:
	float m_fAbscissa;
	float m_fOrdane;
public:
	Geometry();
	~Geometry();
	float getAbscissa();
	float getOrdane();
	void setOrdane(float fOrdane);
	void setAbscissa(float fAbscissa);
	void import();
	virtual void display();
	virtual void draw();
};

