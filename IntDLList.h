#include "IntDLLNode.h"

using namespace std;

class IntDLList {
private:
    IntDLLNode* head = NULL;
    IntDLLNode* tail = NULL;
public:
    bool insertNode(int info, int index);
    void disp();
    void rdisp();
};
