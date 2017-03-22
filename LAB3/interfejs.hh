#ifndef interfejs_hh
#define interfejs_hh 


class StrukturaDanych
{
public:
		virtual void Wpisz(unsigned int indeks, int wartosc) = 0;
		virtual void Drukuj() = 0;
		virtual unsigned int ZwrocRozmiar() = 0;
		virtual void WykonajAlgorytm(unsigned int ile) = 0;
};

#endif