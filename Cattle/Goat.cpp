#include "Goat.h"
#include <time.h>

Goat::Goat(){
}


Goat::~Goat(){
}

string Goat::getSound(){
	return "BEEEEEEEEEEEEEEE";
}

int Goat::getMilk(){
	int nTotalMilk = 0;
	for (int nCount =0; nCount < m_nAmount; nCount++){
	srand(time(0));
	nTotalMilk += rand() % 6;
	}
	m_nMilk = nTotalMilk;
	return nTotalMilk;
}

void Goat::getChildren(){
	int nTotalChildren = 0;
	for (int nCount =0; nCount < m_nAmount; nCount++){
	srand(time(0));
	nTotalChildren += rand() % 3;
	}
	m_nAmount += nTotalChildren;
}

