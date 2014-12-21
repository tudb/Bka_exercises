#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

//-----------------------------------------------------------------
//Description: Lớp mô tả 1 phòng tri=ong khách sạn cùng thông tin cần nhất
//Thuộc tính: ID và số đêm khách ở phòng
//Phương thức: Nhập vào, và các phương thức hiển thị hay tính toán sẽ 
//tường minh ở lớp con
//-----------------------------------------------------------------

class Room{
protected:
	string m_sID;
	int m_nNight;
public:
	Room();
	Room(int nNight);
	~Room();
	void import(string sID, int nAmount);
	virtual void display() = 0; 
	virtual int CalculatorFree() = 0;
};

