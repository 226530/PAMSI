#ifndef queue_hh
#define queue_hh

#include "iqueue.hh"
#include "iwykonywalny.hh"
#include "cell.hh"



class Queue :
	public IWykonywalny,
	public IQueue
{
	
	Cell *_przod = NULL;
	Cell *_tyl  = NULL;
	unsigned int _rozmiar;

	bool CzyPusty();

public:
	Queue();

	void Enqueue(int wartosc);

	int Dequeue();

	unsigned int Size();

	void Drukuj();

	void WykonajAlgorytm(unsigned int ile);
	
};


#endif