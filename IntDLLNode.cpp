#include "IntDLLNode.h"

using namespace std;

IntDLLNode::IntDLLNode()
{
}
IntDLLNode::IntDLLNode(int info, IntDLLNode* next, IntDLLNode* prev)
{
    this->info = info;
    this->next = next;
    this->prev = prev;
}
IntDLLNode::~IntDLLNode()
{
}
