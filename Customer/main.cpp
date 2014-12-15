#include <D:\BKAV Training\Bai tap\Customer\X.h>
#include <d:\bkav training\bai tap\customer\Y.h>
#include <d:\bkav training\bai tap\customer\Z.h>
#include <string>
#include <iostream>
using namespace std;

bool is_number(string str){
	for(int i = 0;i < (str.length() - 1);i++)
		if(!isdigit(str[i])) {
			return false;
		} 
		return true;
}

int StringToInt(string str){
	int nResult = 0;
	for (int nCount = str.length() - 1; nCount >= 0; nCount--){
		nResult += (int(str[nCount]) - 48) * pow(10, nResult++);
	}
	return nResult;
}

 void ReadAndWrite(){
	ifstream fileRead;
	fileRead.open("XYZ.INP", ios::in);
	ofstream fileWrite("XYZ.OUT", ios::out);
	int nPosition = 0;
	int nCode = 0;
	int nTotal = 0; 
		while (!fileRead.eof()){
			string sName;
			getline(fileRead, sName);
			int nAmount;
			int nPrice;
			string sYear;
			fileRead >> nAmount;
			fileRead >> nPrice;
			nPosition = fileRead.tellg();
			fileRead >> sYear;
			if (!is_number(sYear)){
				if (nCode == 0){
					X x;
					x.setName(sName);
					x.setAmount(nAmount);
					x.setPrice(nPrice);
					int nTemp = x.Calculator();
					nTotal += nTemp;
					fileWrite << sName << endl;
					fileWrite << nTemp << endl; 
				} else {
					Z z;
					z.setName(sName);
					z.setAmount(nAmount);
					z.setPrice(nPrice);
					int nTemp;
					nTemp = z.Calculator();
					nTotal += nTemp;
					fileWrite << sName << endl;
					fileWrite << nTemp << endl; 
				}
				fileRead.seekg(nPosition);
			}
			else {
				nCode = 1;
				Y y;
				y.setName(sName);
				y.setAmount(nAmount);
				y.setPrice(nPrice);
				y.setIntimateYear(StringToInt(sYear));
				int nTemp = y.Calculator();
				nTotal += nTemp;
				fileWrite << sName << endl;
				fileWrite << nTemp << endl; 
			}
			if (sYear == "") break;
		}
		fileWrite << nTotal;
		fileRead.close();
		fileWrite.close();
}

int main(){
	ReadAndWrite();
}
