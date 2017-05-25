#include <iostream>

#include "nodetree.hh"
#include "tree.hh"
#include "miernik.hh"
#include "treeavl.hh"

using std::cout;
using std::cin;
using std::endl;



int main()
{
	Tree bst;
	TreeAVL avl;
	Miernik mavl;
	Miernik mbst;

	std::srand(time(NULL));

	int x ;
	int ile = 333;
	
	for(int i = ile; i > 0; --i)
	{
		x = std::rand()%ile;
		avl.Insert(avl.Root(),x);
		bst.Insert(x);
	}
	cout << "udało się"<<endl;
	avl.PrintRootInOrder();
	avl.IsFound(33);






	return 0;
}


