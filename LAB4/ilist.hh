#ifndef ilist_hh
#define ilist_hh

class IList
{
public: 
	virtual void Add(unsigned int indeks,int wartosc) = 0;
	virtual void Remove(unsigned int indeks) = 0;
	virtual int  Get(unsigned int indeks) = 0;
	virtual unsigned int Size() = 0;
	virtual void WykonajAlgorytm(unsigned int ile) = 0;
};

#endif