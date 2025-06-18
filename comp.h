
#pragma once
#include <iostream>
using namespace std;
struct  Comp
{
	char name[50];
	int ram = 4;
	float price;
	void shouwInfo(Comp) {
		cout << "Name : " << name << endl;
		cout << "RAM : " << ram << endl;
		cout << "PRICE : " << price << endl;
	}
};

