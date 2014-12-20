#include "Business.h"
#include "Deluxe.h"
#include "Premium.h"
#include "Room.h"
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;


vector<Premium> ListPremium;
vector<Deluxe> ListDeluxe;
vector<Business> ListBusiness;
int pAmount[3];
void Read(string sFile){
	ifstream read(sFile, ios::in);
	read >> pAmount[0] >> pAmount[1] >> pAmount[2];
	read.close();
	Deluxe oTempD;
	Premium oTempP;
	Business oTempB;
	ListDeluxe = oTempD.getList(sFile, 1 , 4 * pAmount[0]);
	ListPremium = oTempP.getList(sFile, 4 * pAmount[0] +1,4 * pAmount[0] + 3 * pAmount[1]);
	ListBusiness = oTempB.getList(sFile,4 * pAmount[0] + 3 * pAmount[1] +1 ,4 * pAmount[0] + 3 * pAmount[1] + 2 * pAmount[2] );
}

void Write(string sFile){
	int nTotalDeluxe = 0;
	vector<Deluxe>::iterator itD;
	for (itD = ListDeluxe.begin();itD != ListDeluxe.end(); itD++)
		nTotalDeluxe += (*itD).CalculatorFree();
	int nTotalPremium = 0;
	vector<Premium>::iterator itP;
	for (itP = ListPremium.begin();itP != ListPremium.end(); itP++)
		nTotalPremium += (*itP).CalculatorFree();
	int nTotalBusiness = 0;
	vector<Business>::iterator itB;
	for (itB = ListBusiness.begin();itB != ListBusiness.end(); itB++)
		nTotalBusiness += (*itB).CalculatorFree();
	int nTotal = nTotalBusiness + nTotalDeluxe + nTotalPremium;
	ofstream write(sFile, ios::out|ios::app);
	if (write.is_open())
		write << nTotalDeluxe << endl << nTotalPremium << endl << nTotalBusiness << endl << nTotal << endl;
	else cout << "Can't write";
	write.close();
}

int main(){
	string sRead = "SOFITEL.INP";
	string sWrite = "SOFITEL.OUT";
	Read(sRead);
	ofstream writeTitle(sWrite, ios::out);
	if (writeTitle.is_open()){
		writeTitle << pAmount[0] << " " << pAmount[1] << " " << pAmount[2] << endl;
	}
	else return 1;
	Write(sWrite);
}