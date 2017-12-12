#include "Pracownik.h"

int Pracownik::licznik = 0;


Pracownik::Pracownik():
id(licznik++)
{

}


Pracownik::~Pracownik()
{
	--licznik;
}
