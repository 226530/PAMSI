a.out: main.o tree.o treeavl.o nodetree.o miernik.o 
		g++ main.o tree.o treeavl.o nodetree.o miernik.o 

main.o: main.cpp tree.hh nodetree.hh
		g++ -c -Wall -std=c++11 -pedantic main.cpp

tree.o: tree.cpp tree.hh itree.hh
		g++ -c -Wall -std=c++11 -pedantic tree.cpp

treeavl.o: treeavl.hh treeavl.cpp
		g++ -c -Wall -std=c++11 -pedantic treeavl.cpp

nodetree.o: nodetree.hh nodetree.cpp
		g++ -c -Wall -std=c++11 -pedantic nodetree.cpp

miernik.o: miernik.hh miernik.cpp
		g++ -c -Wall -std=c++11 -pedantic miernik.cpp



