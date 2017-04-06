#ifndef stack_hh
#define stack_hh

#include "istack.hh"
#include "iwykonywalny.hh"
#include "cell.hh"


class Stack : 
	public IStack, 
	public IWykonywalny
{
	 Cell *_gora;
	unsigned int _rozmiar;



	bool CzyPusty();

public:
	Stack();

	Stack(unsigned int r);

	int Pop();
	
	void Push(int wartosc);
	
	unsigned int Size() ;
	
	void WykonajAlgorytm(unsigned int ile);

	void Drukuj(); 
};




#endif