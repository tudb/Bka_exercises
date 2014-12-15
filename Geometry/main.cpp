#include "Polygon.h"
#include "PointBase.h"
#include "Triangle.h"
#include "Vector.h"
#include <iostream>
using namespace std;

int main(){
	Polygon oPolygon;
	Vector oVector;
	oPolygon.import();
	oPolygon.display();
	oVector.import();
	Polygon oPolygon1 = oPolygon.translatinal(oVector);
	oPolygon1.display();
	oPolygon1.turn(0.5).display();
	system("pause");
	return 0;
}