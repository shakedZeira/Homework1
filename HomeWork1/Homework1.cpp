/*
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










#include "Stack.h"
using namespace std;

void reverse(int* arr, int  size)
{
    int start = 0;
    int end = size-1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[10];
    for (int i = 0; i < 6; i++)
    {
        cout << "please enter a number" << endl;
        cin>>arr[i];
    }
    for (int j = 0; j < 6; j++)
    {
        cout << arr[j] << " , ";
    }
    cout << endl;
    reverse(arr,6);
    for (int k = 0; k < 6; k++)
    {
        cout << arr[k] << " , ";
    }
    return 0;
}

*/

#include <iostream>
#include "Stack.h"

int main()
{
    MyStack* s = new MyStack;
    initStack(s, 3);
    node* nodee = new node();
    nodee->info = 5;
    push(s,*nodee);
    cout << GetTop(s) << endl;
}