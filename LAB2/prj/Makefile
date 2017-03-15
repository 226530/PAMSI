a.out: main.o tablica.o
		g++ main.o tablica.o

main.o: main.cpp tablica.hh
		g++ -c -Wall -std=c++11 -pedantic main.cpp

tablica.o: tablica.hh tablica.cpp
		g++ -c -Wall -pedantic tablica.cpp