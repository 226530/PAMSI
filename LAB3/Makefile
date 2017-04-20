a.out: main.o tablica.o miernik.o
		g++ main.o tablica.o miernik.o

main.o: main.cpp tablica.hh miernik.hh interfejs.hh
		g++ -c -Wall -std=c++11 -pedantic main.cpp

tablica.o: tablica.hh tablica.cpp
		g++ -c -Wall -pedantic tablica.cpp

miernik.o: miernik.hh miernik.cpp
		g++ -c -Wall -pedantic miernik.cpp 
