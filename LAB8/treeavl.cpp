#include "treeavl.hh"


TreeAVL::TreeAVL()
{
    _root = nullptr;
    _nodesNo = 1;

}


bool TreeAVL::Search(int value)
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

void TreeAVL::PrintRootInOrder()
{
  InOrder(_root);
}

void TreeAVL::InOrder(NodeTree* node)
{
    if(node != nullptr)
    {
        InOrder(node->_left);
        std::cout << node->_value << std::endl;
        InOrder(node->_right);
    }
}

unsigned int TreeAVL::NodesNumber()
{
    return _nodesNo;
}

bool TreeAVL::IsEmpty()
{
    return _root == nullptr; 
}

void TreeAVL::WykonajAlgorytm(unsigned int ile)
{

}

void TreeAVL::IsFound(int value)
{
    bool temp = Search(value);

    if(temp)
    {
        std::cout<< "Value found"  << std::endl;
    }
    else
    {
        std::cout << "Value not found" << std::endl;
    }

}

unsigned int TreeAVL::Height(NodeTree * node)
{
    int height = 0;
    if(node != nullptr)
    {
        int left_height = Height(node->_left);
        int right_height = Height(node->_right);
        int max_height =std::max(left_height, right_height);
        height = max_height + 1;
    }
    return height;
}
 

unsigned int TreeAVL::HeightDiff(NodeTree * node)
{
    int left_height = Height(node->_left);
    int right_height = Height(node->_right);
    int diff = left_height - right_height;
    return diff;
}
 

NodeTree * TreeAVL::Rotate(int mode, NodeTree * node)
{
    NodeTree * temp;
    switch(mode)
    {
        case 1: //RIGHT - RIGHT ROTATION
        {
            temp = rrRotation(node);
            break;
        }

        case 2: //LEFT - LEFT ROTATION
        {
            temp = llRotation(node);
            break;
        }

        case 3:
        {
            temp = lrRotation(node);
            break;
        }

        case 4:
        {
            temp = rlRotation(node);
            break;
        }
    }

    return temp;
}

NodeTree *TreeAVL::rrRotation(NodeTree * node)
{
    NodeTree *temp;
    temp = node->_right;
    node->_right = temp->_left;
    temp->_left = node;
    return temp;
}

NodeTree *TreeAVL::llRotation(NodeTree * node)
{
    NodeTree *temp;
    temp = node->_left;
    node->_left = temp->_right;
    temp->_right = node;
    return temp;
}
 

NodeTree *TreeAVL::lrRotation(NodeTree * node)
{
    NodeTree *temp;
    temp = node->_left;
    node->_left = rrRotation(temp);
    return llRotation(node);
}
 

NodeTree *TreeAVL::rlRotation(NodeTree * node)
{
    NodeTree *temp;
    temp = node->_right;
    node->_right = llRotation(temp);
    return rrRotation(node);
}
 

NodeTree *TreeAVL::Balance(NodeTree * node)
{
    int factor = HeightDiff(node);
    if (factor > 1)
    {
        if (HeightDiff(node->_left) > 0)
        {
            node = llRotation(node);
        }
        else
        {
            node = lrRotation(node);
        }
    }
    else if (factor < -1)
    {
        if (HeightDiff(node->_right) > 0)
        {
            node = rlRotation(node);
        }
        else
        {
            node = rrRotation(node);
        }
    }
    return node;
}

NodeTree * TreeAVL::Insert(NodeTree * node, int value)
{
    if(node == nullptr)
    {
        node = new NodeTree; 
        node->_value = value;
        node->_left = nullptr;
        node->_right = nullptr;

        return node;
    }
    else if(value < node->_value)
    {
        node->_left = Insert(node->_left, value);
        node = Balance(node);

    }
    else if(value >= node->_value)
    {
        node->_right = Insert(node->_right, value);
        node = Balance(node);
    }
    ++_nodesNo;
    return node;
}

NodeTree * TreeAVL::Root()
{
    return _root;
}

void TreeAVL::Insert(int value)
{
}
