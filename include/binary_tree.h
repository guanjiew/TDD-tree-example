#include "node.h"
#include <iostream>
// declare the class that we are implementing
class BinaryTree
{
public:
    // constructor
    BinaryTree();
    // destructor
    ~BinaryTree();
    // insert a new node into the tree
    void Insert(int data);
    // find a node in the tree
    bool Find(int data);
    // the root node of the tree
    Node *root;
};
// constructor
BinaryTree::BinaryTree()
{
    root = NULL;
}

// destructor
BinaryTree::~BinaryTree()
{
    delete root;
}

// declare the method that we are implementing
void BinaryTree::Insert(int data)
{
    if (root == NULL)
    {
        root = new Node(data);
    }
    else
    {
        Node *current = root;
        // bst insert
        while (true)
        {
            if (data < current->data)
            {
                if (current->left == NULL)
                {
                    current->left = new Node(data);
                    break;
                }
                else
                {
                    current = current->left;
                }
            }
            else
            {
                if (current->right == NULL)
                {
                    current->right = new Node(data);
                    break;
                }
                else
                {
                    current = current->right;
                }
            }
        }
    }
}

// declare the method that we are implementing
bool BinaryTree::Find(int data)
{
    if (root == NULL)
    {
        return false;
    }
    else
    {
        Node *current = root;
        // bst find
        while (current != NULL)
        {
            if (data == current->data)
            {
                return true;
            }
            else if (data < current->data)
            {
                current = current->left;
            }
            else
            {
                current = current->right;
            }
        }
        return false;
    }
}
