#include "IntegerNumber.h"
#include "ArrayStack.h"
#include <windows.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
	char temp;
	do {
		IntegerNumber nNumber;
		nNumber.import();
		ArrayStack *pArrayStack;
		pArrayStack = new ArrayStack();
		IntegerNumber oTemp;
		oTemp.analyseToPrime(pArrayStack, nNumber.getNumber());
		cout << nNumber.getNumber() << " = ";
		pArrayStack->displayPrime();
		cout << endl;
		int nBase;
		int nNumberTemp;
		cout << endl << "Import your number want to change base?";
		cin >> nNumberTemp;
		cout << endl << "Import your base you want to change to?";
		cin >> nBase;
		cout << nNumberTemp << " = " << nNumber.changeBase(nBase, nNumberTemp) << endl;
		cout << endl << "Do you want to continue? y/n?";
		cin >> temp;
	} while ((temp != 'N') &&(temp != 'n'));
}