#include "Circle.h"
#include <Windows.h>
#include "graphics.h"
#include <iostream>
using namespace std;

int main(){
	Circle oCircle;
	oCircle.import();
	oCircle.draw();
	ellipse(15, 16 , 17, 18, 19);
	system("pause");
}

void ellipse(int xc, int yc, int a, int b, int color){
    int x,y
    float z1,z2,P;
    x=0;y=b;
    z1=(b*b)/(a*a);
    z2=1/z1;   
    P=2*z1-2*b+1;
    while(z1*(x/y)<=1){
        putpixel(xc+x,yc+y,color);
        putpixel(xc-x;yc+y,color);
        putpixel(xc+x,yc-y,color);
        putpixel(xc-x,yc-y,color);
        if (P<0) P=P+2*z1*(2*x+3);
        else{
            P=P+2*z1*(2*x+3)+4*(1-y);
            y--;
        };
        x++;
    };
    x=a;y=0;
    P=2*z2-2*a+1;
    while(z2*(y/x)<1){
        putpixel(xc+x,yc+y,color);
        putpixel(xc-x;yc+y,color);
        putpixel(xc+x,yc-y,color);
        putpixel(xc-x,yc-y,color);
        if (P<0) P=P+2*z2*(2*y+3);
        else{
            PP+2*z2*(2*y+3)+4*(1-x);
            x--;
        };
        y++;
    };
};