#pragma once
class INTEGER{
private:
	int m_nInt;
public:
	INTEGER();
	INTEGER(int nNumber);
	~INTEGER();
	INTEGER getInt();
	void setInt(int nNumber);
	INTEGER operator+(const INTEGER& oInt);
	INTEGER operator-(const INTEGER& oInt);
	INTEGER operator*(const INTEGER& oInt);
	INTEGER operator/(const INTEGER& oInt);
	void operator++();
	void operator--();
	void operator-=(const INTEGER& oInt);
	void operator+=(const INTEGER& oInt);
};

