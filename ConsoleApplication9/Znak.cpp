#include "Znak.h"

string Znak::getName()
{
	return name;
}

Znak::Znak()
{
	name = "";
	znak = "";
	for (int i = 0; i < 3; i++) {
		data[i] = 0;
	}
}
Znak::Znak(string p, string z, int day, int moon, int year){
	name = p;
	znak = z;
	data[0] = day;
	data[1] = moon;
	data[2] = year;
}

Znak::Znak(const Znak& a) {
	name = a.name;
	znak = a.znak;
	for (int i = 0; i < 3; i++) {
		data[i] = a.data[i];
	}
	
}
