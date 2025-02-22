#ifndef BINARY_TREE_H
#define Binary_TREE_H
#include "BinaryTrees.h"
#include <stdio.h>
void binaryTree(){
    Tree root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    Tree right_ = root->right;
    right_->right = newNode(4);
    right_->right->right = newNode(5);
    right_->right->right->right = newNode(6);
    printf("digraph{\n");
    printTree(root);
    Tree temp = root->right;
    while (!leaf(temp))
    {
        printTree(temp);
        temp = temp->right;
    }
    temp = root->left;
    while (!leaf(temp))
    {
        printTree(temp);
        temp = temp->left;
    }
    printf("}\n");
}

#endif