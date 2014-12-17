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

void Room::import(){
	cout << endl << "Import ID: ";
	cin.ignore();
	getline(cin, m_sID);
	cout << endl << "Import Free per night: ";
	cin >> m_nNight;
}

void Room::display(){
	cout << endl << "ID: " << m_sID;
	cout << endl << "Amout of night : " << m_nNight;
}