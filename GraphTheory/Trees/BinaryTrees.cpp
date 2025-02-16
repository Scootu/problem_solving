#include "BinaryTrees.h"
#include "stdlib.h"
#include "stdio.h"

struct node
{
    int Data;
    Tree left, right;

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