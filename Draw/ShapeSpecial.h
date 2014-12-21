#pragma once
#include "Geometry.h"
#include "graphics.h"
#include <iostream>

//-----------------------------------------------------------------
//Description: Lớp cha của các hình đặc biệt có 4 cạnh:
//Thuộc tính: 4 điểm
//Phương thức:get, set, hàm vẽ. Có 1 hàm ảo là hàm nhập tọa độ
// sẽ tường minh ở lớp con
//-----------------------------------------------------------------

class ShapeSpecial{
protected:
	Geometry m_pPoint[4];
public:
	ShapeSpecial(void);
	~ShapeSpecial(void);
	Geometry* getPoint();
	void setPoint(Geometry *pGeometry);
	virtual void import();
	void draw();
};

