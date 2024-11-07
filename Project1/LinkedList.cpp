#include <iostream>
#include "LinkedList.h"

void initNode(Node* head, unsigned int number)
{
	head->data = number;
	head->next = NULL;
}

void addNode(Node* head, unsigned int number)
{
	while (head->next != NULL)
	{
		head = head->next;
	}

	Node* newNode = new Node;
	newNode->data = number;
	newNode->next = NULL;
	head->next = newNode;
}



void removeNode(Node* head)
{
	if (head == NULL)
	{
		std::cout << "List is empty, nothing to delete.";
		return;
	}

	//moves head to the next node
	Node* temp = head;
	head = head->next;

	//delete the old head node
	delete temp;
}

void printList(Node* head)
{
	int i = 0;

	
}
