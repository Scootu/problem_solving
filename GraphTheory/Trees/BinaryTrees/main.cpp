#include "BinaryTrees.h"
#include <iostream>
using namespace std;

int main()
{
    Tree root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    /*
    Tree right = root->right;
    right->right = newNode(4);
    */
    printf("digraph{\n");
    printTree(root);
    printf("}");
    return 0;
}
