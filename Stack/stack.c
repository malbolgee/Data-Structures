#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void make__stack(stack_t *__stack)
{

	__stack->top = NULL;
	
}

void push(stack_t *__stack, const int __data)
{

	stack_node *aux;

	aux = (stack_node *) malloc(sizeof(stack_node));

	if (!aux)
		exit(1);

	aux->next = __stack->top;
	__stack->top = aux;
	aux->data = __data;

}

int top__stack(stack_t *__stack)
{

	return __stack->top->data;

}

bool is__empty__stack(stack_t *__stack)
{

	return __stack->top == NULL;

}

void pop__stack(stack_t *__stack)
{

	stack_node *aux;

	aux = __stack->top;

	if (aux)
	{

		__stack->top = aux->next;
		free(aux);

	}

}

void print__stack(stack_t *__stack)
{
	
	if (!__stack->top)
		return;

	stack_node *aux;
	aux = __stack->top;

	while (aux)
	{

		printf("%d ", aux->data);
		aux = aux->next;

	}

}