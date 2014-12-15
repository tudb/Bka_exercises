#include "Time.h"
#include "Date.h"
#include <Windows.h>
#include <iostream>
#include "InterestRate.h"
using namespace std;

int main(){
	Time oTime(5,6,40);
	int a = 30;
	Time oTime1 = oTime.operator+(a);
	oTime1.operator<<(cout);
	Date oDateSub(2005,10,31);
	Date oDate(2005,11,5);
	cout << oDateSub.totalDay() << endl;
	Date oResult = oDate.operator-(oDateSub);
	oResult.operator<<(cout);
	InterestRate oInterest;
	oInterest.import();
	cout << endl << "So tien bay gio ban co: ";
	cout << endl << oInterest.CalculatorInterest() << endl;
	system("pause");
}

