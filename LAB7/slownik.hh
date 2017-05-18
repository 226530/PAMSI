#ifndef slownik_hh
#define slownik_hh

#include <string>

#include "islownik.hh"
#include "tablica.hh"
#include "iwykonywalny.hh"

class Slownik : public ISlownik , public IWykonywalny
{
	Tablica _wartosci;
	Tablica _stan;
	Tablica _stat;
	int 	_tryb_haszowania;
	unsigned int _wpisane;
	unsigned int _rozmiar;


public:

	Slownik();
	Slownik(unsigned int r);

	void Dopisz(const std::string &klucz, const int wartosc, const int tryb);
	int ZwrocElement(const std::string &klucz);
	int & operator[](const std::string &klucz);
	unsigned int ZwrocRozmiar();
	unsigned int Haszuj(const std::string &str1);
	unsigned int Haszuj2(const std::string &str);
	void Drukuj();
	void DrukujStat();

	void WykonajAlgorytm(unsigned int ile);

};





#endif