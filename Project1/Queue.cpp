#include "Queue.h"
#include <iostream>


void initQueue(Queue* q, unsigned int size)
{
	int i = 0;

	q->array = new int[size];
	
	q->size = size;

	for(i = 0; i < q->size; i++)
	{
		q->array[i] = 0;

	}

}

void enqueue(Queue* q, unsigned int newValue)
{
	int i = 0;

	while (q->array[i] != 0)
	{
		i++;
	}

	q->array[i] = newValue;

}

int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	int i = 0;
	int save = q->array[0];

	if (q->array[0] == 0)
	{
		return -1;
	}

	for (i = 0; i != q->size; i++)
	{
		q->array[i] = q->array[i + 1];
	}
	q->array[q->size -1] = 0;

	return save;

}

void cleanQueue(Queue* q)
{
	int i = 0;

	while (q->array[i] != 0)
	{
		q->array[i] = 0;
		i++;
	}
}

bool isEmpty(Queue* s)
{

	if (s->array[0] == 0)
	{
		return true;

	}
	
	else
	{
		return false;

	}

}

bool isFull(Queue* s)
{
	int i = 0;

	for (i = 0; i < s->size; i++)
	{
		if (s->array[i] == 0)
		{
			return false;

		}

	}

	return true;

}

void checklist(Queue* q)
{
	int i = 0;
	for (i = 0; i < q->size; i++)
	{
		std::cout << q->array[i] <<"\n";
		
	}

}