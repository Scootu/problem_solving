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
    Tree tempL = leftChild(root);
    Tree tempR = rightChild(root);
    tempL->left = newNode(4);
    tempL->right = newNode(5);
    tempL = rightChild(tempL);
    tempL->left = newNode(7);
    tempL->right = newNode(8);
    tempR->right = newNode(6);
    tempR = rightChild(tempR);
    tempR->left = newNode(9);
    
    DisplayInOrder(root);
    cout<<endl;
    DisplayPostOrder(root);
    cout << endl;
    DisplayP(root);
    cout << endl;
}

#endif