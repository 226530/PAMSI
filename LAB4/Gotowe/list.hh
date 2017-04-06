#ifndef list_hh
#define list_hh

#include "ilist.hh"
#include "iwykonywalny.hh" 
#include "cell.hh"

class List :
	public IWykonywalny,
	public IList
{
	Cell *_poczatek;
	Cell *_koniec;
	unsigned int _rozmiar;

public:
	List();
	List(unsigned int r);
	void Add(int wartosc);
	void Remove(unsigned int indeks);
	int  Get(unsigned int ktory);
	void Drukuj();
	unsigned int Size();
	void WykonajAlgorytm(unsigned int ile);
};

#endif