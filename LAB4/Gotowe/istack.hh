#ifndef istack_hh
#define istack_hh

class IStack
{
public:
	virtual int Pop() = 0;
	virtual void Push(int wartosc)= 0;
	virtual unsigned int Size() = 0;	
};

#endif