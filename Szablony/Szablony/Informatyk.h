#pragma once
#include "Pracownik.h"
class Informatyk :
	public Pracownik
{
	bool graWTibie;
public:
	void wypisz() override;
	Informatyk();
	~Informatyk();
};

