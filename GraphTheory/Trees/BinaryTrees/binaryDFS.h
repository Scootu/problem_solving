#ifndef BINARY_TREESDFS_H
#define BINARY_TREESDFS_H

#include "BinaryTrees.h"
#include <iostream>
using namespace std;

void  BinaryTreeDFS()
{
    Tree root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    Tree tempL = root->left;
    Tree tempR = root->right;
    tempL->left = newNode(4);
    tempL->right = newNode(5);
    tempL = tempL->right;
    tempL->left = newNode(7);
    tempL->right = newNode(8);
    tempR->right = newNode(6);
    tempR = tempR->right;
    tempR->left = newNode(9);
    DisplayP(root);
}

#endif