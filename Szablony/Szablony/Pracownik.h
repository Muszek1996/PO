#pragma once
#include "Header.h"

class Pracownik
{
	static int licznik;
protected:
	const int id;
	int zarobki, nadgodziny, urlop;
public:
	virtual void wypisz() = 0;
	Pracownik();
	~Pracownik();
};

