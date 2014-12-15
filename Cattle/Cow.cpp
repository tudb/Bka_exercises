#include "Cow.h"
#include <cstdlib>
#include <time.h>


Cow::Cow(){
}


Cow::~Cow(){
}

string Cow::getSound(){
	return "BOOOO..oo..";
}

int Cow::getMilk(){
	int nTotalMilk = 0;
	for (int nCount =0; nCount < m_nAmount; nCount++){
	srand(time(0));
	nTotalMilk += rand() % 6;
	}
	m_nMilk = nTotalMilk;
	return nTotalMilk;
}

void Cow::getChildren(){
	int nTotalChildren = 0;
	for (int nCount =0; nCount < m_nAmount; nCount++){
	srand(time(0));
	nTotalChildren += rand() % 3;
	}
	m_nAmount += nTotalChildren;
}

