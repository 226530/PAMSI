#include "slownik.hh"
#include <functional>





Slownik::Slownik()
{
	_wpisane = 0;
	_rozmiar = 100;
	for(unsigned int i = 0; i < 100; ++i)
	{
		_stan.Wpisz(i,0);
		_stat.Wpisz(i,0);
	}
}




Slownik::Slownik(unsigned int r)
{
	_wpisane = 0;
	_rozmiar = r;
	for(unsigned int i = 0; i < r; ++i)
	{
		_stan.Wpisz(i,0);
		_stat.Wpisz(i,0);
	}
}


void Slownik::Dopisz(const std::string &klucz, const int wartosc, const int tryb)
{
	unsigned int indeks;

	if(tryb == 1)
	{
		indeks = Haszuj(klucz);
	}
	else
	{
		indeks = Haszuj2(klucz);
	}

	std::cout<<"#="<<indeks<<std::endl;

	if(indeks >= 0)
	{
		if(_rozmiar < indeks)
		{
			_rozmiar = indeks;
			_stan.Wpisz(indeks, 0);
		}

		if(_stan[indeks] == 0)
		{
			_wartosci.Wpisz(indeks,wartosc);
			_stan.Wpisz(indeks, 1);
			++_wpisane;
		}
		else if(_stan[indeks] == 1)
		{
			_stat.Wpisz(indeks, ++_stat[indeks]);
		}
		else
		{
			std::cout<<"Błąd"<<std::endl;
		}

	}
}


int Slownik::ZwrocElement(const std::string &klucz)
{
	return _wartosci[Haszuj(klucz)];
}

int & Slownik::operator[](const std::string &klucz)
{
	return _wartosci[Haszuj(klucz)];
}

	
unsigned int Slownik::ZwrocRozmiar()
{
	return _rozmiar;
}


unsigned int Slownik::Haszuj(const std::string &str1)
{	
	unsigned int hasz = 0;
	unsigned int temp;


	for (unsigned int i = 0; i < str1.length(); ++i)
    {
    	char znak = str1.at(i);
        temp = int(znak) - 96;
        hasz += temp;
    }
	return hasz % _rozmiar;
}

unsigned int Slownik::Haszuj2(const std::string &str)
{
	unsigned int len = str.length();
	unsigned int hash = 5381;
	unsigned int i = 0;

	for (i = 0; i < len; i++)
	{
		hash = ((hash << 5) + hash) + (str[i]);
	}

	return hash % _rozmiar ;
}





void Slownik::Drukuj()
{
	for(unsigned int i = 0; i <= _rozmiar; ++i)
	{
		if(_stan[i] == 1)
		{
			std::cout<<"Indeks : " << i << " -> "<<"Wartość : " << _wartosci[i]<<std::endl;
		}


	}
}

void Slownik::DrukujStat()
{
	for(unsigned int i = 0; i <= _rozmiar; ++i)
	{
		if(_stat[i] > 0)
		{
			std::cout<<"Indeks : " << i << " -> "<<"Ilosc kolizji: " << _stat[i]<<std::endl;
		}


	}

	std::cout << std::endl << "Ilosc wpisanych poprawnie : " << _wpisane << std::endl;
}


void Slownik::WykonajAlgorytm(unsigned int ile)
{
	//testowanie funkcji haszujacej

	std::string s;

	for(unsigned int i = 0; i < ile; ++i)
	{
		std::cin >> s;
		Haszuj2(s);
	}


}