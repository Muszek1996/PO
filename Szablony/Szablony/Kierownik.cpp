#include "Kierownik.h"
#include "Header.h"
#include <random>

random_device rd1;
uniform_int_distribution<int> kzaro(1800, 2500);
uniform_int_distribution<int> knadgo(0, 25);
uniform_int_distribution<int> kurlo(0, 12);

void Kierownik::wypisz()
{
	cout << "Kierownik" << endl;
	cout << "Bialy Kask:" << białyKask << endl;
	cout << "Zarobki:" << zarobki << endl;
	cout << "Urlop:" << urlop << endl;
	cout << "Nadgodziny" << nadgodziny << endl;
}

Kierownik::Kierownik()
{
	białyKask = true;
	zarobki = kzaro(rd1);
	nadgodziny = knadgo(rd1);
	urlop = kurlo(rd1);
}


Kierownik::~Kierownik()
{
}
