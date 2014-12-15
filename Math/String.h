#pragma once
class String{
private:
	char* m_pString;
	int m_nSizeMax;
public:
	String();
	String(int nSize, String *pString);
	~String();
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

