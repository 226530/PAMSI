#ifndef mergesort_h
#define mergesort_h

#include "TablicaO1.h"
#include "Wykonywalny.h"

class MergeSort : public Wykonywalny
{

	TablicaO1 _DoAlgorytmu;



public:
	MergeSort() {}

	void Scalaj(TablicaO1 &tab, int poczatek, int srodek ,int koniec );
	
	void Sortuj(TablicaO1 &tab, int poczatek, int koniec);

	void PrzygotujAlgorytmDoWykonania(int wielkosc_problemu);

	void WykonajAlgorytm(int wielkosc_problemu);


};



#endif