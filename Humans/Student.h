#pragma once
#include "human.h"
class Student : public Human{
	string m_sJob;
	string m_sUniversity;
	string m_sMajor;
public:
	Student();
	~Student();
	void import();
	void display();
};

