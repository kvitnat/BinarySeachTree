//
// Created by admin on 17.02.2020.
//

#include "Tree.h"
Tree::Tree():root(nullptr)
{

}

Tree::~Tree()
{
    empty(root);
}

void Tree::empty(Node* node)
{
    if(node != nullptr)
    {
        empty(node->left);
        empty(node->right);
        delete node;
    }
}

void Tree::add(int v)
{
    if(root == nullptr)
    {
        root = new Node();
        root->value = v;
        return;
    }

    Node* prevNode = root, * curNode;
    while(prevNode != nullptr)
    {
        if (v < prevNode->value)
        {
            if (prevNode->left == nullptr) {
                prevNode->left = new Node();
                prevNode->left->value = v;
                return;
            } else
            prevNode = prevNode->left;
        }
        else {

            if (prevNode->right == nullptr) {
                prevNode->right = new Node();
                prevNode->right->value = v;
                return;
            }
            else
                prevNode = prevNode->right;
        }
    }
}

void Tree::printTree()
{
    printSubTree(root);
}

void Tree::printSubTree(Node* node)
{
    if(node->left != nullptr)
        printSubTree(node->left);
    std::cout << node->value << ' ';
    if(node->right != nullptr)
        printSubTree(node->right);
}