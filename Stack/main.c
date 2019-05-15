#include <stdio.h>
#include "stack.h"

#define LOG printf("\n\n");

int main (int argc, char **argv)
{

	stack_t stack;
	make__stack(&stack);
	int vet[10] = {1,5,4,7,8,9,2,3,4,6};

	array__to__stack(&stack, vet, 10);

	print__stack(&stack);
	LOG;
	pop__stack(&stack);
	print__stack(&stack);
	LOG;

}