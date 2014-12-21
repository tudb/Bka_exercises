#pragma once
#include <vector>
#include <string>
#include <stack>
using namespace std;

//-----------------------------------------------------------------
//Description: Lớp mô tả xử lí với 1 xâu kí tự đầu vào là biểu 
//thức trung tố, các phương thức sẽ chuyển xâu về dạng trung tố và xử lí 
//Thuộc tính: xâu biểu thức
//Phương thức: chuyển biểu thức trung tố sang hậu tố rồi tính
//-----------------------------------------------------------------

class Expr{
private:
	string m_sString;
public:
	Expr();
	Expr(string pString);
	~Expr();
	bool check(string temp1, string temp2);
	vector<string> InfixToSuffix();
	float convertNumber(string charTemp);
	bool checkSymbol(string temp);
	float eval();
	void import();
	vector<string> analyseString(string);
	bool checkNumber(string temp);
};

