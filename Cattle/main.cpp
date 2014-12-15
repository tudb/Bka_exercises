#include "Cattle.h"
#include "Cow.h"
#include "Sheep.h"
#include "Goat.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){
	Cow oCow;
	Sheep oSheep;
	Goat oGoat;
	int nCowAmount;
	int nSheepAmount;
	int nGoatAmount;
	int nTotalMilk;
	cout << endl << "Nhap so bo : ";
	cin >> nCowAmount;
	oCow.setAmount(nCowAmount);
	cout << endl << "Nhap so cuu :";
	cin >> nSheepAmount;
	oSheep.setAmount(nSheepAmount);
	cout << endl << "Nhap so de: "; 
	cin >> nGoatAmount;
	oGoat.setAmount(nGoatAmount);
	nTotalMilk = oCow.getMilk() + oGoat.getMilk() + oSheep.getMilk();
	cout << endl << "Sau 1 lua thi so sua thu duoc la: " << nTotalMilk;
	oCow.getChildren(); oSheep.getChildren(); oGoat.getChildren();
	cout << endl << "Cow : " << oCow.getAmount();
	cout << endl << "Sheep: " << oSheep.getAmount();
	cout << endl << "Goat : " << oGoat.getAmount() << endl;
	system("pause");
}