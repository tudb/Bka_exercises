#include <cstdlib>
#include <dos.h>
#include <iostream>
#include "graphics.h"
#include "Circle.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <ctype.h>
#define PI 3.14159265359
using namespace std;

void StartGraphic(){
    int driver = 0, mode;
    initgraph(&driver, &mode,"");
}

int main(int argc, char *argv[]){
	StartGraphic();
    setbkcolor(GREEN);
    setcolor(YELLOW);	
	setviewport(100,100,500,500,1);
	settextstyle (3,VERT_DIR,2);
	outtextxy(0,0,"welcome to graphic");
    system("PAUSE");
	closegraph();
    return EXIT_SUCCESS;
}
