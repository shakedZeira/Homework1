/*
#pragma once
#include "LinkedList.h"
#include <iostream>

using namespace LInkedlist;

class MyStack
{
private:
	int maxsize;
	int count;
	bool Empty;
	node* elements;

public:
	MyStack()
	{
		maxsize = 0;
		count = 0;
		Empty = true;
		elements = NULL;
	}
	void push()
	{

	}
};

struct MyStack
{
	int MaxSize;
	int Count;
	bool Empty;
	node* elements;
};

struct node* Top;

bool IsFull(MyStack* S)
{
	if (S->Count > S->MaxSize)
	{
		return true;
	}
	else
	{
		return false;
	}

}
int GetTop(MyStack* s)
{
	return Top->info;
}
bool IsEmpty(MyStack *s)
{
	if (s->Count == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Pop(MyStack *s)
{
	node* temp;
	temp = Top;
	delete Top;
	Top = temp;
	s->Count--;
}
void DeleteStack(MyStack* s)
{
	while (GetTop(s) != NULL)
	{
		Pop(s);
	}
}
void initStack(MyStack* s, int size)
{
	s->Count;
	s->Empty = true;
	s->MaxSize = size;
	s->elements = new node();
}
void push(MyStack* S, node element)
{
	if (IsFull(S) == false)
	{
		Top->next = &element;
	}
	else
	{
		cout << "The Stack is Full" << endl;
	}
}

*/

#pragma once
#include <iostream>

struct Node
{
	int data;
	Node* Next;
};
class myStack
{
private:
	int MaxSize;
	int Count;
	bool Empty;
	Node* top;

public:
	myStack()
	{
		top = NULL;
		Empty = true;
		Count = 0;
		MaxSize = 255;
	}
	bool isEmpty();
	bool isFull();
	void push(int value);
	int getCount();
	void pop();
	int getTopValue();
	void deleteStack();
	void initStack(int size);
};


