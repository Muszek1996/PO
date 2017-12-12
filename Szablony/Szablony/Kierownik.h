#pragma once
#include "Header.h"
#include "Pracownik.h"
class Kierownik : public Pracownik
{
	
	bool białyKask;
public:
	void wypisz() override;
	Kierownik();
	~Kierownik();
};

