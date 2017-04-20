#include <iostream>

#include "Mierzalny.h"
#include "Stoper.h"
#include "TablicaO1.h"

#include "mergesort.h"

using namespace std;

int main() 
{
	TablicaO1 t1;
	MergeSort ms1;

	int j = 25;

	for(int i = 0; i < 25; ++i)
	{
		t1.ZapisanieElemantu(i,j);
		--j;
	}

		for(int i = 0; i < 25; ++i)
	{
		cout << t1.OdczytanieElementu(i) << endl;
	}

	

	


	cout << "Sortowanie" << endl;
	ms1.Sortuj(t1,0,24);

	for(int i = 0; i < 25; ++i)
	{
		cout << t1.OdczytanieElementu(i) << endl;
	}

	

	return 0;
}
