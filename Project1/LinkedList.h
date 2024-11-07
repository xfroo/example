#ifndef LINKEDLIST_H
#define LINKEDLIST_H


typedef struct Node{
	unsigned int  data;
	Node *next;

}Node;

void initNode(Node* head, int number);
void addNode(Node* head, int number);
void removeNode(Node* head);
void printList(Node* head);


#endif