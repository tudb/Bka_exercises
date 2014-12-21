#pragma once
#include <iostream>
using namespace std;

//-----------------------------------------------------------------
//Description: Lớp mô tả thông tin cơ bản nhất về người
//Thuộc tính: Tên, tuổi
//Phương thức:get, set, hàm vẽ. Có 2 hàm ảo là hàm nhập và hiển thị
// sẽ tường minh ở lớp con
//-----------------------------------------------------------------

class Human{
protected:
	string m_sName;
	int m_nAge;
public:
	Human();
	~Human();
	string getName();
	int getAge();
	void setName(string pName);
	void setAge(int nAge);
	virtual void import() = 0;
	virtual void display() = 0;
};

