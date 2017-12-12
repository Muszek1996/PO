#include "Informatyk.h"
#include "Header.h"

random_device rd;
uniform_int_distribution<int> izaro(1800, 2500);
uniform_int_distribution<int> inadgo(0, 25);
uniform_int_distribution<int> iurlo(0, 12);

void Informatyk::wypisz()
{
	cout << "Informatyk(" << id <<")"<< endl;
	cout << "GraWTibie:" << graWTibie << endl;
	cout << "Zarobki:" << zarobki << endl;
	cout << "Urlop:" << urlop << endl;
	cout << "Nadgodziny" << nadgodziny << endl;
}

Informatyk::Informatyk()
{
	graWTibie = true;
	zarobki = izaro(rd);
	nadgodziny = inadgo(rd);
	urlop = iurlo(rd);
}


Informatyk::~Informatyk()
{
}
