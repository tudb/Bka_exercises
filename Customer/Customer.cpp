#include "Customer.h"


Customer::Customer(void)
{
}


Customer::~Customer(void)
{
}

string Customer::getName(){
	return m_sName;
}

int Customer::getAmount(){
	return m_nAmount;
}

int Customer::getPrice(){
	return m_nAmount;
}

void Customer::setName(string sName){
	m_sName = sName;
}

void Customer::setAmount(int nAmount){
	m_nAmount = nAmount;
}

void Customer::setPrice(int nPrice){
	m_nPrice = nPrice;
}
