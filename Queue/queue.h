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

#define __INF 0x3F3F3F3F

void make__queue(queue_t *__queue);
void push__queue(queue_t *__queue, const int __data);
int queue__front(const queue_t *__queue);
int dequeue(queue_t *__queue);
bool is__empty__queue(const queue_t *__queue);
void print__queue(const queue_t *__queue);
void array__to__queue(queue_t *__queue, const int *__array, const unsigned __size);