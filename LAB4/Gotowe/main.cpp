#include <iostream>

#include "stack.hh"
#include "queue.hh"
#include "tablica.hh"
#include "list.hh"
#include "miernik.hh"



using namespace std;


int main()
{
	Miernik  m1;

	Stack s1;
	Queue q1;

	long int wartosci[] = {10,100,1000};

	cout<<"N,Czas"<<endl;

 	for(int i = 0; i < 5; ++i)
 	{
		cout<<wartosci[i]<<",";
		m1.LiczSrednia(10,wartosci[i],s1);
		m1.DrukujSrednia();
	}


	List l1;

	
	
  	return 0;
}