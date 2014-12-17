#pragma once
class Polynomial{
	int m_nDegree;
	float *m_pCoefficient;
	Polynomial(int m_nDegree, float *pCoeffcient);
public:
	Polynomial();
	~Polynomial(void);
	int getDegree();
	int* getCoefficient();
	void import();//cẩn thận thừa vùng nhớ khi gọi 2 lần phương thức này
	float Calculator(float fValue);
	Polynomial derivative();
};

