#pragma once
#include <iostream>
using namespace std;

//------------------------------------------------------------------------------
//Description: Lớp trừu tượng mô tả các động vật với các thuộc tính : số sữa cho,
//số lượng, số con sinh ra, cùng các phương thức : lấy ra số sữa, số con , âm thanh
//-----------------------------------------------------------------------------

class Cattle{
protected : 
	int m_nAmount;
	int m_nMilk;
	int m_nChildren;
public:
	Cattle();
	~Cattle();
	int getAmount();
	void setAmount(int nAmount);
	virtual string getSound() = 0;
	virtual int getMilk() = 0;
	virtual void getChildren() = 0;
};

