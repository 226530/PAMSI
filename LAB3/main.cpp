#include <iostream>
#include <ctime>
#include <chrono>
#include "tablica.hh"
#include "interfejs.hh"
#include "miernik.hh"
#include "testowa.hh"

using namespace std;


int main()
{
	Tablica t1(5);
	Miernik m1;

	m1.LiczSrednia(20,10000 , t1);
	m1.DrukujPomiary();
	m1.DrukujSrednia();





  	return 0;
}