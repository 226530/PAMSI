#ifndef iqueue_hh
#define iqueue_hh

class IQueue
{
public:
	virtual void Enqueue(int wartosc) = 0;
	virtual int Dequeue() = 0;
	virtual unsigned int Size() = 0;
	virtual void WykonajAlgorytm(unsigned int ile ) = 0;

};

#endif