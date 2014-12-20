#include "Deluxe.h"
using namespace std;

Deluxe::Deluxe(){
	m_fFreeService = 0;
}


Deluxe::~Deluxe(void){
}

void Deluxe::import(string sID, int nAmount,int nFreeNight, float fFreeService){
	Premium::import(sID, nAmount, nFreeNight );
    m_fFreeService = fFreeService;
}

void Deluxe::display(){
	Premium::display();
	cout << endl << "Free Service: " << m_fFreeService;
}

int Deluxe::CalculatorFree(){
	return ((m_nNight * 750000 + m_nFreeNight) * (1 + m_fFreeService));
}

vector<Deluxe> Deluxe::getList(string sFile, int nStart, int nEnd){
	int nCount = 0;
	vector<Deluxe> tempVector;	
	string sRemove;
	ifstream read(sFile, ios::in);
	while (nCount < nStart) {
		getline(read, sRemove);
		nCount++;
	}
	while (nCount <= nEnd){
		Deluxe oTemp;
		string sID;
		int nNight;
		int nFreeNight;
		float fFreeService;
		if (int(read.tellg()) != read.beg)
			read.ignore();
		getline(read, sID);
		read.ignore();
		read >> nNight >> nFreeNight >> fFreeService;
		oTemp.import(sID, nNight,nFreeNight ,fFreeService);
		tempVector.push_back(oTemp);
		nCount += 4;
	}
	return tempVector;
}