#include <iostream>

#include "mergesort.h"
#include "TablicaO1.h"


	void MergeSort::Scalaj(TablicaO1 &tab,  int poczatek, int srodek ,int koniec )
	{
		TablicaO1 temp;

		int i = poczatek;
		int j = srodek+1;
		int k = 0;

		while( i <= srodek && j <= koniec)
		{
			if(tab.OdczytanieElementu(j) < tab.OdczytanieElementu(i))
			{
				temp.ZapisanieElemantu(k, tab.OdczytanieElementu(j));
				++j;
			}
			else
			{
				temp.ZapisanieElemantu(k, tab.OdczytanieElementu(i));
				++i;	
			}

			++k;
		}

		if(i <= srodek)
		{
			while(i <= srodek)
			{
				temp.ZapisanieElemantu(k, tab.OdczytanieElementu(i));
				++i;
				++k;
			}
		}
		else
		{
			while(j <= koniec)
			{
				temp.ZapisanieElemantu(k, tab.OdczytanieElementu(j));
				++j;
				++k;
			}

		}

		for(i = 0; i <= koniec-poczatek; ++i)
		{
			tab.ZapisanieElemantu(poczatek + i, temp.OdczytanieElementu(i));
		}
		
	}

	void MergeSort::Sortuj(TablicaO1 &tab, int poczatek, int koniec)
	{
		int srodek;

		if(poczatek != koniec)
		{
			srodek = ((poczatek + koniec)/2);
			Sortuj(tab, poczatek, srodek);
			Sortuj(tab, srodek + 1 , koniec);
			Scalaj(tab, poczatek, srodek, koniec);
		} 
	}

	void MergeSort::PrzygotujAlgorytmDoWykonania(int wielkosc_problemu)
	{
		int wartosc;

		for(int i = 0; i < wielkosc_problemu; ++i)
		{
			wartosc = i;
			_DoAlgorytmu.ZapisanieElemantu(i, wartosc);
		}

	}

	void MergeSort::WykonajAlgorytm(int wielkosc_problemu)
	{
		Sortuj(_DoAlgorytmu, 0, --wielkosc_problemu);
	}