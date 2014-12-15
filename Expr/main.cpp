#include "Expr.h"
#include <Windows.h>
#include <iostream>
using namespace std;

int main(){
	char selection;
	do{
	Expr oExpr;
	oExpr.import();
	cout << " = " << oExpr.eval() << endl;
	cin.ignore();
	selection = getchar();
	} while (selection != 'q');
	system("pause");
}