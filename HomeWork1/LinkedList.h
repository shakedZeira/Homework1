#include <iostream>
using namespace std;
namespace LInkedlist
{

	struct node
	{
		int info;
		node* next;
	};

	class LinkedList
	{
	private:
		node* head, * tail;

	public:
		LinkedList()
		{
			head = NULL;
			tail = NULL;
		}
		int getHeadValue()
		{
			return head->info;	
		}

		void SetHead(node* new_head)
		{
			head = new_head;
		}

		int GetTailValue()
		{
			return tail->info;
		}

		void SetTail(node* new_tail)
		{
			tail = new_tail;
		}

		void printList()
		{
			if (head == NULL)
			{
				cout << "EMPTY!" << endl;
			}
			else
			{
				node* temp = head;
				while(temp != NULL)
				{
					cout << temp->info << " -> ";
					temp = temp->next;
				}
				cout << endl;
			}
		}
		void AddNode(int num)
		{
			node* temp = new node;
			temp->info = num;
			temp->next = NULL;

			if (head == NULL)
			{
				head = temp;
				tail = temp;
			}
			else
			{
				tail->next = temp;
				tail = tail->next;
			}
		}
		//removing the last node
		void RemoveNode()
		{
			node *temp = head;
			if (head == NULL)
			{
				cout << "the list is empty" << endl;
			}
			while (temp->next->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = temp->next->next;
			
		}
	};

}