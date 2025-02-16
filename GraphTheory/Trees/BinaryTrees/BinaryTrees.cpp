#include "BinaryTrees.h"
#include <cstdlib>
#include <cstdio>
struct node
{
    int Data;
    Tree left;
    Tree right;

public:
    node(int value)
    {
        Data = value;
        left = nullptr;
        right = nullptr;
    }
};

bool isTEmpty(Tree t)
{
    return (t == nullptr);
}
bool leaf(Tree t)
{
    if (t->left == nullptr && t->right == nullptr)
        return true;
    return false;
}
Tree leftChild(Tree t)
{
    return t->left;
}
Tree rightChild(Tree t)
{
    return t->right;
}
Tree newNode(int val)
{
    return new node(val);
}
void printTree(Tree t)
{
    if (!isTEmpty(t))
    {
        if (!leaf(t))
        {
            if (leftChild(t) != nullptr)
            {
                printf("%d -> %d\n", t->Data, leftChild(t)->Data);
            }
             if (rightChild(t) != nullptr)
            {
                printf("%d -> %d\n", t->Data, rightChild(t)->Data);
            }
        }
    }
    
}