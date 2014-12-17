#include "Circle.h"
#include "PointBase.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	vector<Rectangle> ListRectangle;
	vector<Triangle> ListTriangle;
	vector<Circle> ListCircle;
	Rectangle oTempRec;
	Triangle oTempTri;
	Circle oTempCir;
	ListRectangle = oTempRec.ListRectangle("INPUT.DAT");
	ListCircle = oTempCir.ListCircle("INPUT.DAT");
	ListTriangle = oTempTri.ListTriangle("INPUT.DAT");
	while (!ListRectangle.empty()) {
		oTempRec = oTempRec.combine(ListRectangle.back());
		ListRectangle.pop_back();
	}
	while (!ListCircle.empty()){
		oTempRec = oTempRec.combine(ListCircle.back().getForce());
		ListCircle.pop_back();
	}
	while (!ListTriangle.empty()){
		oTempRec = oTempRec.combine(ListTriangle.back().getForce());
		ListTriangle.pop_back();
	}
	oTempRec.write("KETQUA.DAT");
	system("pause");
}