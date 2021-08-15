#pragma once
#include <iostream>
namespace queue
{
	struct node
	{
		int info;
		node* next;
	};
	class Quque
	{
		private:
			node* head, * tail;

		public:
			queue()
			{
				head = NULL;
				tail = NULL;
			}
			void enqueue()
			{

			}


	};
}
