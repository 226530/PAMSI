a.out: main.o tablica.o stack.o queue.o list.o cell.o miernik.o
		g++ main.o tablica.o stack.o queue.o list.o miernik.o 

main.o: main.cpp tablica.hh stack.hh queue.hh list.hh cell.hh miernik.hh
		g++ -c -Wall -std=c++11 -pedantic main.cpp

tablica.o: tablica.hh tablica.cpp
		g++ -c -Wall -pedantic tablica.cpp

stack.o: stack.hh stack.cpp
		g++ -c -Wall -pedantic stack.cpp

queue.o: queue.hh queue.cpp
		g++ -c -Wall -pedantic queue.cpp

list.o: list.hh list.cpp
		g++ -c -Wall -pedantic list.cpp

cell.o: cell.hh
		g++ -c -Wall -pedantic cell.hh

miernik.o: miernik.hh miernik.cpp
		g++ -c -Wall -pedantic miernik.cpp

