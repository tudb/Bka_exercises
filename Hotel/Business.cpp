#include "Business.h"


Business::Business(){
}


Business::~Business(){
}

void Business::import(string sID, int nAmount){
	Room::import(sID, nAmount);
}

void Business::display(){
	Room::display();
}

int Business::CalculatorFree(){
	return m_nNight * 300000;
}

vector<Business> getList(string sFile, int nStart, int nEnd){
	int nCount = 0;
	vector<Business> tempVector;
	string sRemove;
	ifstream read(sFile, ios::in);
	while (nCount < nStart) {
		getline(read, sRemove);
		nCount++
	}
	while (nCount <= nEnd){
		Business oTemp;
		string sID;
		int nNight;
		getline(read, sID);
		read >>nNight;
		oTemp.import(sID, nNight);
		tempVector.push_back(oTemp);
		nCount++;
	}
	return tempVector;
}