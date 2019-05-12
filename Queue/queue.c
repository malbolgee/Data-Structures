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

queue_node * queue__pop(queue_t *__queue)
{

	queue_node *aux;

	if (__queue->first)
	{

		if (__queue->first->next)
		{

			// *retorno = __queue->first->dado;
			aux = __queue->first;
			__queue->first = __queue->first->next;
			free(aux);
			return true;

		}
		else
		{

			// *retorno = __queue->first->dado;
			aux = __queue->first;
			__queue->first = __queue->last = NULL;
			free(aux);
			return true;

		}

	}
	else
		return NULL;

}


bool is__empty__queue(queue_t *__queue)
{

	return (__queue->first == NULL);

}
