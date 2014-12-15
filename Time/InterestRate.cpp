#include "InterestRate.h"
using namespace std;


InterestRate::InterestRate(void){
}


InterestRate::~InterestRate(void){
}

void InterestRate::import(){
	cout << endl << "Import total of your money?";
	cin >> m_nAmountMoney;
	cout << endl << "Import interest rate per month?";
	cin >> m_fInterestMonth;
	m_oStart.operator>>(cin);
	m_oCurrent.operator>>(cin);
}

void InterestRate::display(){
	cout << endl << "Your money base " << m_nAmountMoney;
	cout << endl << "Interest Rate: " << m_fInterestMonth;
}

float InterestRate::CalculatorInterest(){
	Date oResultSub = m_oCurrent.operator-(m_oStart);
	int nTotalMonth = 12 * oResultSub.getYear() + oResultSub.getMonth();
	float nTotal = m_nAmountMoney;
	for (int nCount = 0; nCount < nTotalMonth; nCount++){
		nTotal += nTotal * m_fInterestMonth;
	}
	return nTotal;
}