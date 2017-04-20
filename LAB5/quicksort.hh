#ifndef quicksort_hh
#define quicksort_hh

#include "tablica.hh"
#include "iwykonywalny.hh"

class QuickSort : public IWykonywalny
{

	Tablica _kopia;

	public:

	QuickSort();

	void KopiujTablice(Tablica &obj);

	void DrukujKopie();

	void Sortuj(Tablica &obj, int lewo, int prawo, int typ_piwot);

	void SortujKopie(int lewo, int prawo, int typ_piwot);

	void WykonajAlgorytm(unsigned int ile);
};
#endif