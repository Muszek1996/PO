#pragma once
#include "Pracownik.h"
class Biurowy : public Pracownik
{
	bool apple;
public:
	void wypisz() override;
	Biurowy();
	~Biurowy();
};

