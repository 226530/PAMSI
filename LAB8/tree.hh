#ifndef tree_hh
#define tree_hh

#include <iostream>
#include <cstdio>

#include "nodetree.hh"
#include "itree.hh"
#include "iwykonywalny.hh"


/*!
 *\file
 * 
 * \brief Plik przechowujacy defincje klasy Tree
 *
 */

/*!
 *\brief Defincja klasy Tree, bedacej drzewem binarnym
 *
 */
class Tree : public ITree, public IWykonywalny
{
	/*!
	 *\brief Przechowuje ilosc węzłów
	 *
	 */
	unsigned int _nodesNo;

	/*!
	 *\brief Przechowuje wskaźnik na korzeń drzewa 
	 *
	 */
	NodeTree * _root;

	


public:

	/*!
	 *\brief  Konstrukor bezparametryczny, nie wiem co wiecej napisac
	 *
	 */
	Tree();

	/*!
	 *\brief Sprawdza czy drzewo jest puste
	 *
	 */
	bool IsEmpty();

	/*!
	 *\brief Dopisuje element do drzewa
	 *
	 */
	void Insert(int value);

	/*!
	 *\brief Drukuje drzewo na std::cout przejsciem Inorder
	 *
	 */
	void PrintRootInOrder();

	/*!
	 *\brief Przejscie InOrder
	 *
	 */
	void InOrder(NodeTree* node);

	/*!
	 *\brief 
	 *
	 */
	unsigned int NodesNumber();

	/*!
	 *\brief Wyszukuje element na drzewie i zwaraca wsakznik na niego
	 *
	 */
	bool Search(int value);

	/*!
	 *\brief 
	 *
	 */
	void WykonajAlgorytm(unsigned int ile);

	/*!
	 *\brief 
	 *
	 */
	void IsFound(int value);


};


#endif