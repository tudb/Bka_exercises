#include <cstdlib>
#include "ShapeSpecial.h"
#include "Parallelogram.h"
#include "RectangleFake.h"
#include "Square.h"
#include "Trapezium.h"
#include <iostream>
#include "graphics.h"
#include "Circle.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <ctype.h>
using namespace std;

template<class T>
void draw(){
	moveto(500, 500);
	T oTemp;
	oTemp.import();
	oTemp.draw();
}

void KhoiTaoDohoa()
{
    int driver=0,mode;
    initgraph(&driver,&mode,"");
}
int main(int argc, char *argv[])
{
	KhoiTaoDohoa();
    setbkcolor(GREEN);
    setcolor(YELLOW);	
	int nSeclection;
	cout << endl << "**************************************";
	cout << endl << "1. Hinh chu nhat";
	cout << endl << "2. Hinh thang";
	cout << endl << "3. Hinh vuong";
	cout << endl << "4. Hinh binh hanh";
	cout << endl << "5. Hinh Tron";
	do {
		cout << endl << "Import kind of importation: ";
		cin >> nSeclection;
		switch (nSeclection){
			case 1 : draw <RectangleFake>();break;
			case 2 : draw <Trapezium>();break;
			case 3 : draw<Square>();break;
			case 4 : draw<Parallelogram>();break;
			case 5 : draw<Circle>();break;
			default: cout << "Failed input key, try again";
		}
	} while ((nSeclection <1) || (nSeclection >4));
    system("PAUSE");
	closegraph();
    return EXIT_SUCCESS;
}