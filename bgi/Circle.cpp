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
	circle(m_fAbscissa, m_fOrdane, m_fRadius);
}