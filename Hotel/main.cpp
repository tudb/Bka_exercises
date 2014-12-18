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
void read(string sFile){
	ifstream read(sFile, ios::in);
	read >> pAmount[0] >> pAmount[1] >> pAmount[2];
	read.close();
	Deluxe oTempD;
	Premium oTempP;
	Business oTempB;
	string sFile = "SOFITEL.INP";
	ListDeluxe = oTempD.getList(sFile, 1 , pAmount[0]);
	ListPremium = oTempP.getList(sFile, pAmount[0] +1,pAmount[0] + pAmount[1]);
	ListBusiness = oTempB.getList(sFile,pAmount[0] + pAmount[1] +1 ,pAmount[0] + pAmount[1] + pAmount[2] );
}

void write(string sFile){
	int nTotoalDeluxe;
	vector<Premium>::iterator itD;
	for
	ofstream write(sFile, i);