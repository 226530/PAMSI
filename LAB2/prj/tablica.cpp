#include <iostream>
#include "tablica.hh"

	Tablica::Tablica()
	{
		_rozmiar = 1;
		_tab = new int[_rozmiar];
	}

	Tablica::Tablica(int r)
	{
		_rozmiar = r;
		_tab = new int[_rozmiar];
	}

	void Tablica::Powieksz(int nowy_rozmiar)
	{
		int *temp = new int[nowy_rozmiar];

		for(int i = 0; i < _rozmiar; ++i)
			{
				temp[i] = _tab[i];
			} 
		
		_rozmiar = nowy_rozmiar;
		_tab = new int[_rozmiar];
		

		for(int i = 0; i < _rozmiar; ++i)
			{
				_tab[i] = temp[i];
			}
		delete [] temp;
	}

	void Tablica::Powieksz2x()
	{
		int stary_rozmiar = _rozmiar; 
		int *temp = new int[2*_rozmiar];

		for(int i = 0; i < _rozmiar; ++i)
			{
				temp[i] = _tab[i];
			} 

		
		_rozmiar *= 2;
		_tab = new int[_rozmiar];
		

		for(int i = 0; i < stary_rozmiar; ++i)
			{
				_tab[i] = temp[i];
			}
		delete [] temp;
	}

	void Tablica::PowiekszO1()
	{
		int nowy_rozmiar = ++_rozmiar;
		int *temp = new int[nowy_rozmiar];

		for(int i = 0; i < _rozmiar; ++i)
			{
				temp[i] = _tab[i];
			} 
		
		//_rozmiar++;
		_tab = new int[_rozmiar];
		

		for(int i = 0; i < _rozmiar; ++i)
			{
				_tab[i] = temp[i];
			}
		delete [] temp;
	}

	int Tablica::ZwrocRozmiar()
	{
		return _rozmiar;
	}

	void Tablica::Wpisz(int indeks, int wartosc)
	{
		++indeks;
		
		if(_rozmiar >= indeks)
		{
			--indeks;
			_tab[indeks] = wartosc;
		}
		else 
		{
			Powieksz2x();
			--indeks;
			Wpisz(indeks,wartosc);
		} 
	}

	void Tablica::Drukuj()
	{
		std::cout<<"Dane tablicy:"<<std::endl;

		for(int i = 0; i < _rozmiar; ++i)
		{
			std::cout<<_tab[i]<<" ";
		}
		std::cout<<std::endl;
	}
