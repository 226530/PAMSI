#include <iostream>

#include "Mierzalny.h"
#include "Stoper.h"
#include "TablicaO1.h"
#include "drukarz.h"

#include "mergesort.h"

#define ILE 100000
#define ILESREDNIA 1

using namespace std;




int main() 
{
	MergeSort m1;
	Stoper    s1;
	double tab[ILESREDNIA];
	Drukarz   d1;
	int srednia = 0;


	for(int i = 0; i < ILESREDNIA; ++i )
	{

	m1.PrzygotujAlgorytmDoWykonania(ILE);
	s1.Start();
	m1.WykonajAlgorytm(ILE);
	s1.Stop();
	cout << endl << s1.PodajCzas(2) << endl;
	tab[i] = s1.PodajCzas(2);

	}

	
	for(int j = 0; j < ILESREDNIA; ++j)
	{
		srednia += tab[j];
	}
	
	return 0;
}
