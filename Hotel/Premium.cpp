#include "Premium.h"
using namespace std;

Premium::Premium(){
	m_nFreeNight = 0;
}


Premium::~Premium(){
}

void Premium::import(string sID, int nNight, int nFreeNight){
	Business::import(sID, nNight);
	m_nFreeNight = nFreeNight;
}

void Premium::display(){
	Business::display();
	cout << endl << "Free per a night: " << m_nFreeNight;
}

int Premium::CalculatorFree(){
	return ((m_nNight * 500000 + m_nFreeNight) * 1.05);
}

vector<Premium>Premium::getList(string sFile, int nStart, int nEnd){
	int nCount = 0;
	vector<Premium> tempVector;
	string sRemove;
	ifstream read(sFile, ios::in);
	while (nCount < nStart) {
		getline(read, sRemove);
		nCount++
	}
	while (nCount <= nEnd){
		Premium oTemp;
		string sID;
		int nNight;
		float fFreeNight;
		getline(read, sID);
		read >> nNight >> fFreeNight;
		oTemp.import(sID, nNight, fFreeNight);
		tempVector.push_back(oTemp);
		nCount++;
	}
	return tempVector;
}