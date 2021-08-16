#pragma once
#include <iostream>
#include "Stack.h"
class Queue
{
private:
	myStack begin;
	myStack end;

public:
	Queue()
	{
		begin;
		end;
	}
	void enqueue(int value);
	int dequeue();
};
