#include "Y.h"


Y::Y(void)
{
}


Y::~Y(void)
{
}

int Y::getIntimateYear(){
	return m_nIntimateYear;
}

void Y::setIntimateYear(int nYear){
	m_nIntimateYear = nYear;
}

int Y::Calculator(){
	float fTemp = (m_nIntimateYear * 0.05);
	fTemp = ( fTemp > 0.5) ? 0.5 : fTemp;
	return (m_nAmount * m_nPrice * (1.1 - fTemp));
}
