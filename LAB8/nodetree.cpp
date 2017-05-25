#include "nodetree.hh"


NodeTree::NodeTree()
{
	_left = nullptr;
	_right = nullptr;
}


NodeTree::NodeTree( NodeTree *l,  NodeTree *r,  int v)
{
	_left  = l;
	_right = r;
	_value = v;
}