#include <iostream>
#include <string>
#include "slownik.hh"
#include "miernik.hh"



using namespace std;


int main()
{
	Slownik s1;
	Miernik m1;

	m1.LiczSrednia(10,10000,s1);
	m1.DrukujSrednia();




	return 0;
}
