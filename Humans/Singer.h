#pragma once
#include "human.h"
class Singer : public Human{
	string m_sKindMusic;
	string m_sCompany;
public:
	Singer(void);
	~Singer(void);
	void import();
	void display();
};

