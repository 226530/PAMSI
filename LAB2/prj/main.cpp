#include <iostream>
#include <ctime>
#include <chrono>
#include "tablica.hh"

using namespace std;

int main()
{
	chrono::time_point<chrono::system_clock> start, end;
    start = chrono::system_clock::now();
	
	Tablica t1(10);
	//clock_t start = clock();
	for(int i = 0; i <10000; ++i)
	{
		t1.Wpisz(i,1);
		
	}

	end = chrono::system_clock::now();
 
    chrono::duration<double> elapsed_seconds = end-start;
     
    cout << elapsed_seconds.count() <<endl;

  	return 0;
}
