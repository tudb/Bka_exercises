#include <cstdlib>
#include <dos.h>
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
#define PI 3.14159265359
using namespace std;
void StartGraphic()
{
    int driver=0,mode;
    initgraph(&driver,&mode,"");
}
int main(int argc, char *argv[]){
	StartGraphic();
    setbkcolor(GREEN);
    setcolor(YELLOW);	
	float fAbscissa = 900;
	float fOrdane = 900;
	float fAlpha = 0;
	moveto(20,20);
	while (1) {
		cout << "Showing" << endl;
		fAbscissa = (fAbscissa * cos(fAlpha) - fOrdane * sin(fAlpha));
		fOrdane = (fAbscissa * sin(fAlpha) + fOrdane * cos(fAlpha));
		circle(0, 0, 500);
		line(0,0, fAbscissa, fAbscissa);
		delay(1000);
		if ((fAlpha + PI / 360) < PI)
			fAlpha += PI/360;
			else
				fAlpha = 0;
	}
    system("PAUSE");
	closegraph();
    return EXIT_SUCCESS;
}
