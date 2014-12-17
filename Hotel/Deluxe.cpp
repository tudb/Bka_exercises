#include "Deluxe.h"
using namespace std;

Deluxe::Deluxe(){
	m_fFreeService = 0;
}


Deluxe::~Deluxe(void){
}

void Deluxe::import(){
	Premium::import();
	cout << endl << "Import Free Service: ";
	cin >> m_fFreeService;
}

void Deluxe::display(){
	Premium::display();
	cout << endl << "Free Service: " << m_fFreeService;
}

int Deluxe::CalculatorFree(){
	return ((m_nNight * 750000 + m_nFreeNight) * (1 + m_fFreeService));
}
