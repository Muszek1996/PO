#include "Biurowy.h"

#include "Header.h"

random_device rd2;
uniform_int_distribution<int> zaro(1800, 2500);
uniform_int_distribution<int> nadgo(0, 25);
uniform_int_distribution<int> urlo(0, 12);

void Biurowy::wypisz()
{
	cout << "Biurowy" << endl;
	cout << "Ma apple'a:" << apple << endl;
	cout << "Zarobki:" << zarobki << endl;
	cout << "Urlop:" << urlop << endl;
	cout << "Nadgodziny" << nadgodziny << endl;
}

Biurowy::Biurowy()
{
	zarobki = zaro(rd2);
	nadgodziny = nadgo(rd2);
	urlop = urlo(rd2);
	apple = true;
}


Biurowy::~Biurowy()
{
}
