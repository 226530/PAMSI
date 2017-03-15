#include <iostream>

class Tablica
{
	int *_tab;
	int  _rozmiar;



	void Powieksz(int nowy_rozmiar);
	
	void Powieksz2x();
	
	void PowiekszO1();

public:
	Tablica();
	
	Tablica(int r);
	
	int ZwrocRozmiar();

	void Wpisz(int indeks, int wartosc);

	void Drukuj();
};