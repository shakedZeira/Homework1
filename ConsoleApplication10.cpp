#include <iostream>
#include "LinkedList.h"

using namespace std;
using namespace LInkedlist;


int main()
{
    cout << "Hello World!\n";
    LinkedList *List = new LinkedList();
    //int num = 10;
    List->printList();
    List->AddNode(10);
    List->printList();
    int headVal = List->getHeadValue();
    cout << headVal << endl;
    List->AddNode(12);
    List->printList();
    List->printList();
    List->AddNode(16);
    List->printList();
    List->RemoveNode();
    List->printList();
    List->RemoveNode();
    List->printList();


    
}

