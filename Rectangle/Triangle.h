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
	PointBase m_pPoint[3];
public:
	Triangle();
	Triangle(PointBase pPoint[3]);
	~Triangle();
	PointBase* getPoint();
	void setPoint(PointBase pPoint[3]);
	Rectangle getForce();
	void display();
	vector<Triangle> ListTriangle(string sFile);
};
