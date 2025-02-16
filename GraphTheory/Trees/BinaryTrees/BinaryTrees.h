#ifndef BINARY_TREES_H
#define BINARY_TREES_H


typedef struct node* Tree;

bool isTEmpty(Tree t);
bool leaf(Tree t);
Tree leftChild(Tree t);
Tree rightChild(Tree t);
Tree newNode(int val);
void printTree(Tree t);

#endif