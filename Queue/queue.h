#include <stdbool.h>
#pragma once

typedef struct __queue__node{
	
	int data;
	struct __queue__node *next;

} queue_node;

typedef struct __queue__type{

	queue_node *first;
	queue_node *last;

} queue_t;

void make__queue(queue_t *__queue);
void push__queue(queue_t *__queue, const int __data);
int queue__front(queue_t *__queue);
queue_node * queue__pop(queue_t *__queue);
bool is__empty__queue(queue_t *__queue);