#include <stdio.h>
#include "queue.h"

#define LOG printf("\n\n");

int main (int argc, char **argv)
{

	int vet[10] = {5,6,4,7,9,0,1,3,4,5};

	queue_t queue;
	make__queue(&queue);
	array__to__queue(&queue, vet, 10);
	
	print__queue(&queue);
	LOG;
	dequeue(&queue);
	print__queue(&queue);
	LOG;
	dequeue(&queue);
	print__queue(&queue);
	LOG;
	printf("%d\n", queue__front(&queue));
	printf("%c\n", !is__empty__queue(&queue) ? 'N' : 'Y');

}