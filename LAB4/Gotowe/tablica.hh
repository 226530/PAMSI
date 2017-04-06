#ifndef tablica_hh
#define tablica_hh

#include <iostream>
#include "itablica.hh"
#include "iwykonywalny.hh"


class Tablica :
	public ITablica, 
	public IWykonywalny
{
	int *_tab;
	unsigned int  _rozmiar;



	void Powieksz(unsigned int nowy_rozmiar);
	
	void Powieksz2x();
	
	void PowiekszO1();

public:
	Tablica();
	
	Tablica(int r);
	
	unsigned int ZwrocRozmiar();

	void Wpisz(unsigned int indeks, int wartosc);

	void Drukuj();

	void WykonajAlgorytm(unsigned int ile);
};

#endif