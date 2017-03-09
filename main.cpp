#include <iostream>



class Tablica
{
	int *_tab;
	int  _rozmiar;


	void Init()
	{
		_tab = new int[_rozmiar];	
	}
public:
	
	void Powieksz(int nowy_rozmiar)
	{
		int *temp = new int[nowy_rozmiar];

		for(int i = 0; i < _rozmiar; ++i)
			{
				temp[i] = _tab[i];
			} 
		
		_rozmiar = nowy_rozmiar;
		Init();
		

		for(int i = 0; i < _rozmiar; ++i)
			{
				_tab[i] = temp[i];
			}
		delete [] temp;
	}



	Tablica()
	{
		_rozmiar = 1;
		Init();
	}

	Tablica(int r)
	{
		_rozmiar = r;
		Init();
	}

	int ZwrocRozmiar()
	{
		return _rozmiar;
	}

	void Wpisz(int indeks, int wartosc)
	{
		int i = indeks;
		--i;
		if(_rozmiar >= i)
		{
			_tab[indeks] = wartosc;
		}
		else 
		{
			Powieksz(indeks);
			Wpisz(indeks,wartosc);
		} 

	}

	void Drukuj()
	{
		std::cout<<"Dane tablicy:"<<std::endl;

		for(int i = 0; i < _rozmiar; ++i)
		{
			std::cout<<_tab[i]<<" ";
		}
		std::cout<<std::endl;

	}


	


};


int main()
{
	Tablica t1(1);
	
	std::cout<<t1.ZwrocRozmiar()<<std::endl;
	/*
	t1.Wpisz(0,1);
	t1.Wpisz(1,2);
	t1.Wpisz(2,3);
	t1.Wpisz(3,4);
	t1.Drukuj();
	*/
	t1.Powieksz(5);

	std::cout<<t1.ZwrocRozmiar()<<std::endl;

	return 0;
}

