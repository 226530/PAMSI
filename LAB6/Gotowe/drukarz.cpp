#include <iostream>

#include "drukarz.h" 
#include "TablicaO1.h"

 	void Drukarz::DrukujTabliceO1(TablicaO1 &tab)
 	{
 		int temp_rozmiar = tab.Rozmiar();

 		std::cout << "TablicaO1 :" << std::endl;

 		while(temp_rozmiar > 0)
 		{
 			std::cout << "Tablica[" << temp_rozmiar << "]  :   " << tab.OdczytanieElementu(temp_rozmiar) << std::endl;
 			--temp_rozmiar;
 		}


 	}