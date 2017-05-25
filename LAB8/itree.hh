#ifndef itree_hh
#define itree_hh

#include "nodetree.hh"

/*!
 *\file
 *
 *\brief Plik przechowujący definicję interfejsu klasy Tree 
 *
 */

/*!
 *\brief Definicja interfejsu ITree
 *
 *
 */ 
class ITree
{
	virtual void Insert(int value) = 0;
	virtual bool Search(int value) = 0 ;
	virtual void InOrder(NodeTree * node) = 0 ;
};



#endif