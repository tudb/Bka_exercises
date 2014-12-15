#pragma once
#include "human.h"
class Pupil : public Human{
private:
	string m_sSchool;
	int m_nClass;
public:
	Pupil(void);
	~Pupil(void);
	void import();
	void display();
};

