#pragma once
#include "human.h"
class Artist :	public Human{
private:
	string m_sKind;
public:
	Artist();
	~Artist();
	void import();
	void display();
};

