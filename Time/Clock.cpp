#include <cstdlib>
#include <dos.h>
#include <iostream>
#include "graphics.h"
#include <stdio.h>
#include <Windows.h>
#include "Time.h"
#include "Date.h"
#include <string>
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
	Time oTime;
	Date oDate;
	oTime.setHour(23);
	oTime.setMinute(59);
	oTime.setSecond(50);
	oDate.setYear(2010);
	oDate.setMonth(3);
	oDate.setDay(10);
    setbkcolor(GREEN);
    setcolor(YELLOW);
	int a = 0;
	setviewport(100,100,500,500,1);
	while (1){
		string sClock = to_string(oDate.getYear()) + " / " + to_string(oDate.getMonth()) +" / " + to_string(oDate.getDay()) + "  " + to_string(oTime.getHour()) + " " + to_string(oTime.getMinute()) + " " + to_string(oTime.getSecond());
		char *pClock = new char[sClock.length() +1];
		strcpy(pClock,sClock.c_str());
		outtextxy(100, 100, pClock);
		oTime.operator++();
		delay(1000);
			if (oTime.getHour() > 23){
				oTime.setHour(0);
				oDate.operator++();
			}
			clearviewport();
	}
	system("PAUSE");
	closegraph();
    return EXIT_SUCCESS;
}
