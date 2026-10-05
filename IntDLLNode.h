#ifndef INTDLLNODE_H
#define INTDLLNODE_H

using namespace std;

class IntDLLNode {
public:
    int info;
    IntDLLNode* next;
    IntDLLNode* prev;

    IntDLLNode();
    IntDLLNode(int info, IntDLLNode* next, IntDLLNode* prev);
    ~IntDLLNode();
};

#endif
