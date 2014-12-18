#include "Room.h"
using namespace std;

Room::Room(void){
	m_nNight = 0;
}

Room::Room(int nNight){
	m_nNight = nNight;
}

Room::~Room(void){
}

void Room::import(string sID, int nAmount){
	m_sID = sID;
	m_nNight = nAmount;
}

void Room::display(){
	cout << endl << "ID: " << m_sID;
	cout << endl << "Amout of night : " << m_nNight;
}