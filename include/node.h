#include <iostream>

class Node
{
public:
    Node(int data);
    ~Node();
    int data;
    Node *left;
    Node *right;
};

Node::Node(int data)
{
    this->data = data;
    left = NULL;
    right = NULL;
}

Node::~Node()
{
    delete left;
    delete right;
}
