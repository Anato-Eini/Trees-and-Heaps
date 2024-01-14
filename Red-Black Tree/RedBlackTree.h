#ifndef TREES_AND_HEAPS_REDBLACKTREE_H
#define TREES_AND_HEAPS_REDBLACKTREE_H

#include <iostream>
#include "Node.h"
using namespace std;
class RedBlackTree {
    Node* root;
    unsigned long long size;
    static void rotateLeft(Node*);
    static void rotateRight(Node*);
    static void insertHelper(Node*, int);
    static void insertFix(Node*);
    static Node* searchHelper(Node*, int);
public:
    RedBlackTree() : root(nullptr), size(0) {}
    void insert(int);
    Node* search(int);
};


#endif //TREES_AND_HEAPS_REDBLACKTREE_H