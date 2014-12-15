#include "Circle.h"
#include "graphics.h"
using namespace std;

Circle::Circle(){
	m_fRadius = 0;
}

Circle::Circle(float fAbscissa, float fOrdane, float fRadius){
	m_fAbscissa = fAbscissa;
	m_fOrdane = fOrdane;
	m_fRadius = fRadius;
}

Circle::~Circle(){
}

float Circle::getRadius(){
	return m_fRadius;
}

void Circle::setRadius(float fRadius){
	m_fRadius = fRadius;
}

void Circle::import(){
	Geometry::import();
	cout << endl << "Ban kinh: ";
	cin >> m_fRadius;
}

void Circle::display(){
	cout << endl << "Circle:";
	Geometry::display();
	cout << endl << "Ban kinh: " << m_fRadius;
}

void Circle::draw(){
	int mh, mode;
	mh = EGA;
	mode = EGALO;
	initgraph(&mh, &mode, "");
	  int maloi=graphresult();
    if (maloi==0) cout<<"Da khoi tao do hoa";
    else cout<<"Co loi khoi tao do hoa";
	setbkcolor(GREEN);
	setcolor(WHITE);
	setfillstyle(SLASH_FILL, RED);
	circle(m_fAbscissa, m_fOrdane, m_fRadius);
	closegraph();
}