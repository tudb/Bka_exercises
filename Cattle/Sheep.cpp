#include "Sheep.h"
#include <time.h>


Sheep::Sheep(){
}


Sheep::~Sheep(){
}

string Sheep::getSound(){
	return "BEEE..ee...";
}

int Sheep::getMilk(){
	int nTotalMilk = 0;
	for (int nCount =0; nCount < m_nAmount; nCount++){
	srand(time(0));
	nTotalMilk += rand() % 6;
	}
	m_nMilk = nTotalMilk;
	return nTotalMilk;
}

void Sheep::getChildren(){
	int nTotalChildren = 0;
	for (int nCount =0; nCount < m_nAmount; nCount++){
	srand(time(0));
	nTotalChildren += rand() % 3;
	}
	m_nAmount += nTotalChildren;
}
