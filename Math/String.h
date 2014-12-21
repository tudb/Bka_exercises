#pragma once

//-----------------------------------------------------------------
//Description: Môn phỏng kiểu dữ liệu string cùng các phép toán cơ bản
//-----------------------------------------------------------------

class String{
private:
	char* m_pString;
	int m_nSizeMax;
public:
	String();
	String(int nSize, char *pString);
	~String();
	void import(int nSize);
	int getSizeMax();
	char* getString();
	void setSizeMax(int nSizeMax);
	void setString(char* string);
	void import();
	int size();
	String operator+(const String& pString);
	bool operator=(String oString);
	bool operator>(String oString);
	bool operator<(String oString);
	void operator=(String& oString);
};

