#ifndef tablica_hh
#define tablica_hh

#include <iostream>

#include "itablica.hh"


class Tablica : public ITablica
{
	int *_tab;
	unsigned int  _rozmiar;

	void Powieksz(unsigned int nowy_rozmiar);
	
	void Powieksz2x();
	
	void PowiekszO1();

public:
	Tablica();
	
	Tablica(unsigned int r);
	
	unsigned int ZwrocRozmiar();

	void Wpisz(unsigned int indeks, int wartosc);

	void Drukuj();

	int & operator[](unsigned int indeks) 
	{
		return _tab[indeks];
	}

};

#endif