#include "IntegerNumber.h"
#include <iostream>
#include <string>
using namespace std;

IntegerNumber::IntegerNumber(){
	m_nNumber = 0;
}


IntegerNumber::~IntegerNumber(){
}

void IntegerNumber::import(){
	cout << "Import your number need to analyse : ";
	cin >> m_nNumber;
	cout << endl;
}

int IntegerNumber::getNumber(){
	return m_nNumber;
}

void IntegerNumber::setNumber(int m_nNumber){
	this->m_nNumber;
}

bool IntegerNumber::checkPrime(int nNumber){
	for (int nNumTest = 2; nNumTest <= (m_nNumber / 2); nNumTest++){
		if ((nNumber % 2) == 0) return false;
	}
	return true;
}

int IntegerNumber::analyseToPrime(ArrayStack *arrayStack, int nNumber){
	int nNumberTest = 2;
	while (true){
		if ((checkPrime(nNumberTest)) && ((nNumber % nNumberTest) == 0)){
			arrayStack->push(nNumberTest);
			nNumber = nNumber / nNumberTest;
			if (nNumber == 1)
				break;
			else
				return analyseToPrime(arrayStack, nNumber);
		}
		nNumberTest++;
	}
	return 0;
}

ArrayStack* IntegerNumber::saveRemainder(int byBase, int nNumber){
	ArrayStack *arrayStack;
	arrayStack = new ArrayStack();
	do {
		arrayStack->push(nNumber % byBase);
		nNumber = nNumber / byBase;
	} while ((nNumber / byBase) > 0);
	arrayStack->push(nNumber);
	return arrayStack;
}

string IntegerNumber::changeBase(int byBase, int nNumber){
	ArrayStack* arrayStack = saveRemainder(byBase, nNumber);
	string base = "0123456789ABCDEF";
	string express = "";
	while (!(arrayStack->isEmpty())){
		express += base[arrayStack->pop()];
	}
	delete (arrayStack);
	return express;
}
