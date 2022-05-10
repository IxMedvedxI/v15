
#include "array.h"
#include "Znak.h"

int main()
{
	string xin;
	Arr<Znak> group;
	ifstream in("Text1.txt");
	ofstream out("Text2.txt");
	in >> group;
	group.sort(Znak::compData);
	out << group;
	cin >> xin;
	for (int i = 0; i < group.len(); i++) {
		if (group[i].getName() == xin) {
			cout << group[i];
		}
	}

	
}