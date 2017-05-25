#include "tree.hh"




Tree::Tree()
{
	_root = nullptr;
	_nodesNo = 1;

}


bool Tree::IsEmpty()
{
	return _root == nullptr; 
}

void Tree::Insert(int value)
{
 	NodeTree* temp = new NodeTree;
    NodeTree* parent;
    NodeTree* current;
    
    temp->_value = value;
    temp->_left = nullptr;
    temp->_right = nullptr;
    parent = nullptr;
    
    if(IsEmpty()) 
    {
   		_root = temp;
   	}
  
    else
    {
        current = _root;
        
     	while(current)
        {
            parent = current;
            if(temp->_value > current->_value) 
            {
            	current = current->_right;
            }
            else 
            {
            	current = current->_left;
            }
        }

        if(temp->_value < parent->_value)
        {
           parent->_left = temp;
        }
        else
        {
           parent->_right = temp;
        }
    }

    ++_nodesNo;
}

void Tree::WykonajAlgorytm(unsigned int ile)
{

}

bool Tree::Search(int value)
{
    NodeTree *temp = _root;

    while (temp != nullptr)
    {
        if (temp->_value == value)
        {
            break;
        }

        if (value > temp->_value)
        {
            temp = temp->_right;
        }
        else
        {
        	if (value < temp->_value)
        	{
            	temp = temp->_left;
        	}
        }
    }

    if (temp == nullptr)
    {
        return false;
    }

    if (temp->_value == value)
    {
        return true;
    }

    return false;
}


void Tree::PrintRootInOrder()
{
  InOrder(_root);
}

void Tree::InOrder(NodeTree* node)
{
    if(node != nullptr)
    {
        if(node->_left) 
        {
        	InOrder(node->_left);
       	}

        std::cout << node->_value << std::endl;

        if(node->_right) 
        {
        	InOrder(node->_right);
        }
    }
}


  


