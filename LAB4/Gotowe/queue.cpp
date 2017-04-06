#include <iostream>

#include "queue.hh"
#include "cell.hh"

	bool Queue::CzyPusty()
	{
		if(_przod == NULL)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	Queue::Queue()
	{

	}


	void Queue::Enqueue(int wartosc)
	{
		_rozmiar++;
		Cell *wsk = new Cell;
		wsk->_wartosc = wartosc;
		wsk->_kolejny = NULL;
		if(_przod == NULL)
		{
			_przod = _tyl = wsk;
			_tyl->_kolejny = NULL;
		}
		else
		{
			_tyl->_kolejny = wsk;
			_tyl = wsk;
			_tyl->_kolejny = NULL;
		}

	}

	int Queue::Dequeue()
	{
		int wartosc;
		Cell *tmp = new Cell;

		if(CzyPusty())
		{
			std::cout<< "Nic tu nie ma" << std::endl;
			return -333;
		}
		else
		{

		tmp = _przod;
		wartosc = tmp->_wartosc;
		_przod = _przod->_kolejny;
		delete(tmp);
		_rozmiar--;

		return wartosc;
		}
	}

	unsigned int Queue::Size()
	{
		return _rozmiar;
	}

	void Queue::Drukuj()
	{
		std::cout<<"Kolejka"<<std::endl;

		while(!CzyPusty())
		{
			std::cout<<Dequeue()<<std::endl;
		}
	}


	void Queue::WykonajAlgorytm(unsigned int ile)
	{
		std::cout<<"QUEUE"<<std::endl;
		int znaleziona = 0;

		for(unsigned int i = 0; i < --ile; ++i)
		{
			Enqueue(1);
		}
		Enqueue(42);


		while(znaleziona != 42)
		{
			znaleziona = Dequeue();
		}
		//std::cout<<"JES"<<std::endl;
	}


