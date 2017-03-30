#ifndef istack_hh
#define istack_hh

class IStack
{
public:
	virtual void Pop() = 0;
	virtual void Push()= 0;
	virtual unsigned int Size() = 0;
	virtual void WykonajAlgorytm(unsigned int ile) = 0; 
	
};

#endif