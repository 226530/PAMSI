#ifndef islownik_hh
#define islownik_hh

#include <string>

class ISlownik
{
	virtual void Dopisz(const std::string &klucz, const int wartosc, const int tryb) = 0;
	virtual int ZwrocElement(const std::string &klucz) = 0;
};






#endif