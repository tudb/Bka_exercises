#include "Premium.h"
using namespace std;

Premium::Premium(){
	m_nFreeNight = 0;
}


Premium::~Premium(){
}

void Premium::import(){
	Business::import();
	cout << endl << "Import Free per a nigt: ";
	cin >> m_nFreeNight;
}

void Premium::display(){
	Business::display();
	cout << endl << "Free per a night: " << m_nFreeNight;
}

int Premium::CalculatorFree(){
	return ((m_nNight * 500000 + m_nFreeNight) * 1.05;
}