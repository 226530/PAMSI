#include <iostream>

#include "stack.hh"


	bool Stack::CzyPusty()
	{
		if(_rozmiar > 0)
		{
			return 0;	
		}
		else
		{
			return 1;
		}
	}

	Stack::Stack()
	{
		_rozmiar = 0;
	}

	Stack::Stack(unsigned int r)
	{

	}

	int Stack::Pop()
	{
		struct Cell *tmp;

		tmp = _gora;
		_gora=_gora->_kolejny;


		_rozmiar--;
		return tmp->_wartosc;
	}
	
	void Stack::Push(int wartosc)
	{
		_rozmiar++;
		struct Cell *wsk;
		wsk = new Cell;
		wsk->_wartosc = wartosc;
		wsk->_kolejny = NULL;

		if(_gora!=NULL)
		{
			wsk->_kolejny=_gora;
		}

	_gora = wsk;

	}
	
	unsigned int Stack::Size()
	{
		return _rozmiar;
	}
	
	void Stack::WykonajAlgorytm(unsigned int ile)
	{
		int szukana = 42;
		int znaleziona;

		for(unsigned int i = 0; i < --ile; ++i)
		{
			Push(2);
		}
		Push(42);

		znaleziona = Pop();
		while(znaleziona != szukana)
		{
			znaleziona = Pop();
		}

		//std::cout<<"BINGO!"<<std::endl;
	}

	void Stack::Drukuj()
	{
		std::cout<<"Dane stosu:"<<std::endl;
		while(!CzyPusty())
		{
		std::cout<<Pop()<<std::endl;
		}
	}