#ifndef stos_hh
#define stos_hh

#include "istack.hh"


class Stos : public IStack
{
	int *_dane;
	int *_gora;
	unsigned int _rozmiar;



	void CzyPelny();

	void Powieksz();

public:
	Stos();

	Stos(unsigned int r);

	void Pop();
	
	void Push();
	
	unsigned int Size() ;
	
	void WykonajAlgorytm(unsigned int ile); 

	void Drukuj(); 

	unsigned int ZwrocRozmiar();



};




#endif