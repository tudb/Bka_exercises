#include "Expr.h"
#include <math.h>
#include <stack>
#include <vector>
#include <iostream>
using namespace std;

Expr::Expr(){
}

Expr::Expr(string pString){
	m_sString = pString;
}

Expr::~Expr(){
}
void Expr::import(){
	cout << "Nhap vao phep toan : ";
	getline(cin, m_sString);
}

bool Expr::checkNumber(string temp){
	for (int nCount = 0; nCount < temp.length(); nCount++){
		if (!isdigit(temp[nCount])) 
			return false;
		return true;
	}
}

bool Expr::checkSymbol(string temp){
		if ((temp == "+") || (temp == "-") || (temp == "/") || (temp == "*"))
			return true;
		else return false;
}

bool Expr::check(string temp1, string temp2){
	if ((temp1 == "+") || (temp1 == "-")) {
		if ((temp2 == "-") || (temp2 == "+")) return true;
		else return false;
	}else if ((temp1 == "*") || (temp1 == "/")) {
		if ((temp2 == "*") || (temp2 == "/") || (temp2 == "+") || (temp2 == "-")) return true;
		else return false;
	}
	return false;
}

vector<string> Expr::InfixToSuffix(){
	vector<string>::iterator  itVector;
	vector<string> tempVector,temp;
	temp = analyseString(m_sString);
	vector<string> resultVector;
	for (itVector = temp.begin(); itVector != temp.end();itVector++ ){
		if (checkNumber(*itVector)){
			resultVector.push_back(*itVector);
		}
		else 
		if (*itVector == "(")
			tempVector.push_back(*itVector);
		else if (checkSymbol(*itVector)){	
			while ((!tempVector.empty())&&(check(tempVector.back(), *itVector)) && checkSymbol(tempVector.back())){
				string temp = tempVector.back();
				resultVector.push_back(temp);
				tempVector.pop_back();
			}
			tempVector.push_back(*itVector);

		}
		else if (*itVector == ")"){
			string temp ;
			while (tempVector.back() != "("){
				temp = tempVector.back();
				resultVector.push_back(temp);
				tempVector.pop_back();
			}
			tempVector.pop_back();
		}
	 }
	if (!tempVector.empty()){
			string temp = tempVector.back();
			resultVector.push_back(temp);
			tempVector.pop_back();
	}
	return resultVector;
};

float  Expr::convertNumber(string temp){
	float fTotal = 0;
	for (int nCount = temp.length() - 1; nCount >= 0 ; nCount--){
		fTotal += (int(temp[nCount]) - 48) * pow(10, nCount);
	}
	return fTotal;
};


float Expr::eval(){
	vector<string> resultVector;
	stack<float> temp;
	vector<string>::iterator itVector;
	float fResult;
	resultVector = InfixToSuffix();
	for (itVector = resultVector.begin(); itVector != resultVector.end(); itVector++){
		if (checkNumber(*itVector)){
			temp.push(convertNumber(*itVector));
		}
		else if (checkSymbol(*itVector)){
			float nTemp1 = temp.top();
			temp.pop();
			float nTemp2 = temp.top();
			temp.pop();
			if(*itVector == "+") temp.push(nTemp1 + nTemp2);
			if(*itVector == "-") temp.push(nTemp1 - nTemp2);
			if(*itVector == "*") temp.push(nTemp1 * nTemp2);
			if(*itVector == "/") temp.push(nTemp2 / nTemp1);
				
		}
	}
	fResult = temp.top();
	temp.pop();
	return fResult;
}

		
vector<string> Expr::analyseString(string tempString){
	vector<string> stringVector, *returnValue;
	for (unsigned int nCount = 0; nCount < tempString.length(); nCount++){
		string temp = "";
		temp += tempString[nCount];
		if (isdigit(tempString[nCount])){
			string temp = "";
			while (nCount < tempString.length()){
				if (!isdigit(tempString[nCount])) break;
				temp += tempString[nCount];
				nCount++;				
			}
		stringVector.push_back(temp);
		nCount--;
		}
		else stringVector.push_back(temp);
	}
	return stringVector;
}
