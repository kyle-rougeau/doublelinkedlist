#include <iostream>
#include "IntDLList.h"

using namespace std;

int main()
{
    IntDLList myDLList;

    cout << endl;

    myDLList.insertNode(10,0);
    myDLList.disp();

    myDLList.insertNode(40,0);
    myDLList.disp();

    myDLList.insertNode(20,0);
    myDLList.disp();

    myDLList.insertNode(30,1);
    myDLList.disp();

    myDLList.rdisp();

    return 0;
}
