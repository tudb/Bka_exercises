#include "Business.h"
#include "Deluxe.h"
#include "Premium.h"
#include "Room.h"
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

vector<Business> BusinessBox;
template<class T>
 void BusinessSave(string sID, int nNight){

