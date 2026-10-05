#include <iostream>
#include "IntDLList.h"

using namespace std;

bool IntDLList::insertNode(int info, int index)
{
    if (head == NULL)
    {
        if (index != 0)
        {
            return false;
        }

        head = new IntDLLNode(info,NULL,NULL);
        tail = head;
    }
    else if (head == tail)
    {
        if (index != 0)
        {
            return false;
        }
        head->next = new IntDLLNode(info,NULL,head);
        tail = head->next;
    }
    else
    {
        IntDLLNode* beforeInsert = head;
        IntDLLNode* afterInsert = head->next;
        
        for (int i = 0; i < index; i++)
        {
            if (afterInsert == tail)
            {
                return false;
            }

            beforeInsert = beforeInsert->next;
            afterInsert = afterInsert->next;
        }

        beforeInsert->next = new IntDLLNode(info, afterInsert, beforeInsert);
        afterInsert->prev = beforeInsert->next;
    }

    return true;
}

void IntDLList::disp()
{
    IntDLLNode* temp = head;
    cout << temp->info << " ";
    while(temp->next != NULL)
    {
        temp = temp->next;
        cout << temp->info << " ";
    }
    cout << endl << endl;
}

void IntDLList::rdisp()
{
    IntDLLNode* temp = tail;
    cout << temp->info << " ";
    while(temp->prev != NULL)
    {
        temp = temp->prev;
        cout << temp->info << " ";
    }
    cout << endl << endl;
}
