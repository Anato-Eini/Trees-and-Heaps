#include "node.h"
class Tree {
public:
    virtual Node* create(int num) = 0;
    virtual Node* insert(Node *n, int num) = 0;
    virtual Node* search(Node* n, int num) = 0;
    virtual int maxHeight(Node* n) = 0;
    virtual int height(Node* n, int num) = 0;
    virtual int depth(Node *n, int num) = 0;
    virtual void deleteNode(Node*& n, int num) = 0;
    virtual void displayTree(struct Node* node) = 0;
};