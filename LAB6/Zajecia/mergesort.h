#ifndef mergesort_h
#define mergesort_h

#include "TablicaO1.h"

class MergeSort
{


public:
	MergeSort() {}

	void Scalaj(TablicaO1 &tab, int poczatek, int srodek ,int koniec );
	
	void Sortuj(TablicaO1 &tab, int poczatek, int koniec);

};



#endif