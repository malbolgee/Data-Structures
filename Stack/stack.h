#include <stdbool.h>
#pragma once

typedef struct __stack__node__type{

	int data;
	struct __stack__node__type *next;

} stack_node;

typedef struct __stack__type{

	stack_node *top;

} stack_t;

void push__stack(stack_t *__stack, const int __data);
int top__stack(const stack_t *__stack);
void make__stack(stack_t *__stack);
bool is__empty__stack(const stack_t *__stack);
void pop__stack(stack_t *__stack);
void print__stack(const stack_t *__stack);
void array__to__stack(stack_t *__stack, const int *__array, const unsigned __size);