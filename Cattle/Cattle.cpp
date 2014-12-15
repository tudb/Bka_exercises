#include "Cattle.h"


Cattle::Cattle(){
	m_nAmount = 0;
	m_nChildren = 0;
	m_nMilk = 0;
}


Cattle::~Cattle(){
}

int Cattle::getAmount(){
	return m_nAmount;
}

void Cattle::setAmount(int nAmount){
	m_nAmount = nAmount;
}