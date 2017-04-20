a.out: main.o tablica.o quicksort.o miernik.o 
		g++ main.o tablica.o quicksort.o miernik.o 

main.o: main.cpp tablica.hh quicksort.hh miernik.hh
		g++ -c -Wall -std=c++11 -pedantic main.cpp

tablica.o: tablica.hh tablica.cpp
		g++ -c -Wall -pedantic tablica.cpp

quicksort.o: quicksort.hh quicksort.cpp
		g++ -c -Wall -pedantic quicksort.cpp

miernik.o: miernik.hh miernik.cpp
		g++ -c -Wall -pedantic miernik.cpp



