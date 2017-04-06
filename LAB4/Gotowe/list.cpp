#include <iostream>

#include "list.hh"

	List::List()
	{
		_poczatek = _koniec = NULL;
	}

	void List::Add(int wartosc)
    {
      Cell *temp = new Cell;
      temp->_wartosc = wartosc;
      temp->_kolejny = NULL;
      if(_poczatek == NULL)
      {
        _poczatek = temp;
        _koniec = temp;
        temp = NULL;
      }
      else
      {	
        _koniec->_kolejny = temp;
        _koniec = temp;
      }
    }



	

	void List::Remove(unsigned int indeks)
	{

		--_rozmiar;
	}

	int  List::Get(unsigned int ktory)
	{	
		Cell *tmp = _poczatek;

		for(unsigned int i = 0; i < ktory; ++i)
		{
			tmp = tmp->_kolejny;
		}
		
		return tmp->_wartosc;

	}

	void List::Drukuj()
	{
		Cell *tmp = _poczatek;
		
		while(tmp != NULL) 
		{
			std::cout << tmp->_wartosc << std::endl;
			tmp = tmp->_kolejny;
			
		}

	}

	unsigned int List::Size()
	{
		return _rozmiar;

	}

	void List::WykonajAlgorytm(unsigned int ile)
	{
		unsigned int indeks = 0;
		int znaleziona = 0;

		for(unsigned int i = 0; i < --ile; ++i)
		{
			Add(1);
		}
		Add(42);

		while(znaleziona != 42)
		{

			znaleziona = Get(indeks);
			++indeks;	
		}


	}
