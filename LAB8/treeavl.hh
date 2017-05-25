#ifndef TreeAVL_hh
#define TreeAVL_hh

#include <iostream>

#include "nodetree.hh"
#include "itree.hh"
#include "iwykonywalny.hh"



class TreeAVL : public ITree , public IWykonywalny
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


	/*!
	 *\brief Przechowuje wskaźnik na korzeń drzewa 
	 *
	 */
	unsigned int Height(NodeTree * node);

	/*!
	 *\brief Przechowuje wskaźnik na korzeń drzewa 
	 *
	 */
	unsigned int HeightDiff(NodeTree * node);

	/*!
	 *\brief Przechowuje wskaźnik na korzeń drzewa 
	 *
	 */
	NodeTree * Rotate(int mode, NodeTree * node);

	/*!
	 *\brief Przechowuje wskaźnik na korzeń drzewa 
	 *
	 */
	NodeTree * rrRotation(NodeTree * node);

	/*!
	 *\brief Przechowuje wskaźnik na korzeń drzewa 
	 *
	 */
	NodeTree * llRotation(NodeTree * node);

	/*!
	 *\brief Przechowuje wskaźnik na korzeń drzewa 
	 *
	 */
	NodeTree * lrRotation(NodeTree * node);

	/*!
	 *\brief Przechowuje wskaźnik na korzeń drzewa 
	 *
	 */
	NodeTree * rlRotation(NodeTree * node);

	/*!
	 *\brief Przechowuje wskaźnik na korzeń drzewa 
	 *
	 */

public:
	TreeAVL();

	NodeTree * Insert(NodeTree * node, int value);

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

	bool IsEmpty();

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

	/*!
	 *\brief Przechowuje wskaźnik na korzeń drzewa 
	 *
	 */
	NodeTree * Balance(NodeTree * node);

	/*!
	 *\brief Przechowuje wskaźnik na korzeń drzewa 
	 *
	 */
	NodeTree * Root();

	void Insert(int value);

};



#endif