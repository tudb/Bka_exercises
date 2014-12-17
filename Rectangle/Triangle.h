#pragma once
#include "PointBase.h"
#include "Rectangle.h"
#include <vector>
#include <math.h>
#include <iostream>
#include <fstream>
using namespace std;

class Triangle{
private:
	PointBase *m_pPoint;
public:
	Triangle();
	Triangle(PointBase *pPoint);
	~Triangle();
	PointBase* getPoint();
	void setPoint(PointBase *pPoint);
	Rectangle getForce();
	void display();
	vector<Triangle> ListTriangle(string sFile);
};
