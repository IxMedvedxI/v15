#pragma once
#include <string>
#include <fstream>
#include "array.h"
using namespace std;
class Znak
{
private:
	string name;
	string znak;
	int data[3];
public:
	string getName();
	Znak();
	Znak(string p, string z, int day,int moon,int year);
	Znak(const Znak& a);


	Znak& operator=(const Znak& a) {
		name = a.name;
		znak = a.znak;
		for (int i = 0; i < 3; i++) {
			data[i] = a.data[i];
		}
		return *this;
	}

	~Znak() {};

	friend ostream& operator<<(ostream& os, const Znak& a) {
		
		os << a.name<<"	"<< a.znak<<" "<<a.data[0]<<"."<<a.data[1]<<"."<<a.data[2]<<"\n";
		return os;
	}

	friend istream& operator>>(istream& os, Znak& a) {
		os >> a.name >> a.znak;
		for (int i = 0; i < 3; i++) {
			os >> a.data[i];
		}
		return os;
	}

	static bool compName(const Znak& a, const Znak& b) {
		return a.name.compare(a.name)>0;
	}
	static bool compZnak(const Znak& a, const Znak& b) {
		return a.znak>b.znak;
	}
	static bool compData(const Znak& a, const Znak& b) {
		if (a.data[2] != b.data[2]) {
			return a.data[2] < b.data[2];
		}
		if (a.data[1] != b.data[1]) {
			return a.data[1] < b.data[1];
		}
		return a.data[0] < b.data[0];
	}
};

