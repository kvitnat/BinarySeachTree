//
// Created by admin on 17.02.2020.
//

#ifndef LESSON2_TREE_H
#define LESSON2_TREE_H

#include <iostream>
struct Node
{
    Node* left;
    Node* right;
    int value;
    Node():left(nullptr), right(nullptr), value(0)
    {}
};

class Tree
{
private:
    Node* root;
public:
    Tree();
    ~Tree();
    void add(int v);
    void printTree();
    void printSubTree(Node*);
    void empty(Node*);
};



#endif //LESSON2_TREE_H
