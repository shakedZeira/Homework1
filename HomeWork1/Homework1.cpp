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
#include "Queue.h"
using namespace std;

bool myStack::isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void myStack::push(int value)
{
    Node* ptr = new Node();
    ptr->data = value;
    ptr->Next = top;
    top = ptr;
    Count++;
}

void myStack::pop()
{
    if (isEmpty())
    {
        cout << "Stack is Empty" << endl;
        Empty = true;
    }
    else
    {
        Node* ptr = top;
        top = top->Next;
        delete(ptr);
        Count--;
    }
}
bool myStack::isFull()
{
    if (Count > MaxSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int myStack::getTopValue()
{
    if (isEmpty())
    {
        cout << "There is no value! , its NULL" << endl;
        return NULL;
    }
    else
    {
        return top->data;
    }
}

void myStack::deleteStack()
{
    while (!isEmpty())
    {
        pop();
    }
}
void myStack::initStack(int size)
{
    int value;
    cout << "please enter a value" << endl;
    cin >> value;
    for (int i = 0; i < size; i++)
    {
        push(value);
        cout << "please enter a value" << endl;
        cin >> value;
    }
}
int myStack::getCount()
{
    return Count;
}

void initliazeStack()
{
    myStack stk = myStack();
    stk.push(5);
    cout << "Top: " << stk.getTopValue() << endl;
    stk.initStack(6);
    cout << endl;
    for (int i = 0; i < stk.getCount() + 1; i++)
    {
        cout << stk.getTopValue() << endl;
        stk.pop();
    }
}

void initlaizeQueue()
{
    Queue q = Queue();
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(5);
    cout << "Top : " << q.dequeue() << endl;
    q.dequeue();
    cout << "Top : " << q.dequeue() << endl;
}

int main()
{
    initliazeStack();
    cout << "Q: ///////" << endl;
    initlaizeQueue();
}


void Queue::enqueue(int value)
{
    while (begin.isEmpty() == false)
    {
        end.push(begin.getTopValue());
        begin.pop();
    }
    begin.push(value);

    while (!end.isEmpty())
    {
        begin.push(end.getTopValue());
        end.pop();
    }
}

int Queue::dequeue()
{
    if (begin.isEmpty())
    {
        cout << "its empty already!" << endl;
    }
    else
    {
        int top = begin.getTopValue();
        begin.pop();
        return top;
    }
}
