#ifndef NodeTree_hh
#define NodeTree_hh

/*!
 *\file
 *\brief Plik przechowujacy klase NodeTree
 *
 */


/*!	
 *\brief Klasa definujaca NodeTree, czyli węzeł drzewa
 *
 *
 */
struct NodeTree
{
	/*!
	 *\brief Przechowuje wartosc węzła
	 *
	 */
	int	_value;
	
	/*!
	 *\brief Przechowuje wskaznik na prawego syna
	 *
	 */
	NodeTree  * _right;

	/*!
	 *\brief Przechowuje wskaznik na lewego syna
	 *
	 */
	NodeTree  * _left;

	/*!
	 *\brief Konstruktor bezparametryczny
	 *
	 */
	NodeTree();

	/*!
	 *\brief Konstruktor parametryczny
	 *
	 */
	NodeTree(NodeTree *l,  NodeTree *r,  int value);

};


#endif