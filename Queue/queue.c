#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void make__queue(queue_t *__queue)
{

	__queue->first = NULL;
	__queue->last = NULL;

}

void push__queue(queue_t *__queue, const int __data)
{

	queue_node *aux;
	aux = (queue_node *) malloc(sizeof(queue_node));

	if (!aux)
		exit(1);

	if (__queue->first)
		__queue->last->next = aux;
	else
		__queue->first = aux;

	aux->next = NULL;
	__queue->last = aux;
	aux->data = __data;

}

int dequeue(queue_t *__queue)
{

	int __return;
	queue_node *aux;

	if (__queue->first)
	{

		if (__queue->first->next)
		{

			__return = __queue->first->data;
			aux = __queue->first;
			__queue->first = __queue->first->next;
			free(aux);
			return __return;

		}
		else
		{

			__return = __queue->first->data;
			aux = __queue->first;
			__queue->first = __queue->last = NULL;
			free(aux);
			return __return;

		}

	}
	else
		return -__INF;

}

bool is__empty__queue(const queue_t *__queue)
{

	return (__queue->first == NULL);

}

void print__queue(const queue_t *__queue)
{

	queue_node *aux = __queue->first;
	while (aux)
	{

		printf("%d ", aux->data);
		aux = aux->next;

	}

}

int queue__front(const queue_t *__queue)
{

	return __queue->first->data;

}

void array__to__queue(queue_t *__queue, const int *__array, const unsigned __size)
{

	for (unsigned i = 0; i < __size; ++i)
		push__queue(__queue, __array[i]);

}

void erase__queue(queue_t *__queue)
{

	if (!__queue->first)
		return;

	queue_node *tmp;
	queue_node *aux = __queue->first;

	while (aux)
	{

		tmp = aux;
		aux = aux->next;
		free(tmp);

	}

	__queue->first = __queue->last = NULL;

}
