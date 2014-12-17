#pragma once
#include "PointBase.h"
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

class Rectangle {
	float m_fLength;
	float m_fWidth;
	PointBase m_oPoint;
public:
	Rectangle();
	Rectangle(PointBase oPoint, float fLength, float fWidth);
	~Rectangle();
	float getLength();
	float getWidth();
	PointBase getPoint();
	void setLength(float fLength);
	void setWidth(float fWidth);
	void setPoint(PointBase oPoint);
	Rectangle combine(Rectangle& oRectangle);
	void display();
	vector<Rectangle> ListRectangle(string  sFile);
	void write(string sFile);
};

