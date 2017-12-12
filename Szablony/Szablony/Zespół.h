#pragma once
#include "Header.h"

template <int ilosc,class typ>
class Zespół
{
	static int licznik;
	const int id;
	typ* wskaznik;
	const int wielkoscZespolu = ilosc;
public:
	friend ostream& operator<<(ostream& wyjscie, Zespół& zesp)
	{
		wyjscie << "Wielkosc zespolu:" << zesp.wielkoscZespolu;
		for (int i = 0; i < zesp.wielkoscZespolu; i++)
		{
			zesp.wskaznik[i].wypisz();
		}
		return wyjscie;
	};
	Zespół();
	~Zespół();
};




template<int ilosc, class typ>
int Zespół<ilosc,typ>::licznik = 0;

template<int ilosc, class typ>
Zespół<ilosc,typ>::Zespół():
id(licznik++)
{
	wskaznik = new typ[ilosc];
	cout << "Konstruktor zespolu wielkosc: " << ilosc << endl;
}

template<int ilosc, class typ>
Zespół<ilosc,typ>::~Zespół()
{
}
