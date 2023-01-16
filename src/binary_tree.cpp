#include "binary_tree.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    // create a new tree
    BinaryTree tree;
    // insert some nodes into the tree
    tree.Insert(5);
    tree.Insert(3);
    tree.Insert(7);
    tree.Insert(2);

    // find some nodes in the tree
    if (tree.Find(5))
    {
        std::cout << "Found 5" << std::endl;
    }
    if (tree.Find(3))
    {
        std::cout << "Found 3" << std::endl;
    }

    // delete the tree
    delete tree.root;
    return 0;
}