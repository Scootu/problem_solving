#ifndef BINARY_TREES_H
#define BINARY_TREES_H

struct node
{
    int Data;
    node *left;
    node *right;

    node(int value)
    {
        Data = value;
        left = nullptr;
        right = nullptr;
    }
    ~node()
    {
        delete left;
        delete right;
    }
};

typedef struct node *Tree;

bool isTEmpty(Tree t);
bool leaf(Tree t);
Tree leftChild(Tree t);
Tree rightChild(Tree t);
Tree newNode(int val);
void printTree(Tree t);
void DisplayP(Tree t);
#endif