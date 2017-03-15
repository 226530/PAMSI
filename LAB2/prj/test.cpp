#include <iostream>
#include <cstdlib>
#include <fstream>

#define  ILE 20


using namespace std;

int main()
{
	double tab[ILE];
	double srednia = 0;

	system("touch dane");
	system("rm dane");
	system("touch dane");

	fstream plik;


	for(int i = 0; i <ILE; ++i)	
	{
		system("./a.out >> dane");
		system("echo >> dane");
	}
	
	plik.open("dane", fstream::in);

	for(int i = 0; i <ILE; ++i )
	{
		plik>>tab[i];
	}

	plik.close();

	for(int i = 0; i <ILE; ++i )
	{
		srednia += tab[i];
	}

	srednia = srednia/ILE;
	cout<<"Wyniki pomiarów:"<<endl;
	system("cat dane");


	cout<<"Średnia z "<<ILE<<" pomiarów:"<< srednia << endl;

	

	return 0;
}