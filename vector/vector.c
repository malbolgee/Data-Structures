#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define true 1
#define false 0
#define MAXSIZE 101
#define DEFAULT_VECTOR_SIZE 100

typedef struct vector{

	int field__size;
	char *campo;

} vector;

void push_back(vector *, char);
void make_vector(vector *__adj);

void main ()
{

	int n, m;
	int i, j;
	srand(time(NULL));



	vector adj[MAXSIZE];
	for (i = 0; i < MAXSIZE; ++i)
		make_vector(&adj[i]);
	
	for (i = 1; i <= MAXSIZE; ++i)
	{

		for (j = 0; j < adj[i].field__size; ++j)
			printf("linha: %d Valor: %hhd \n", i, adj[i].campo[j]);

		printf("\n");

	}

}

void make_vector(vector *__adj)
{

	int i;
	for (i = 0; i < MAXSIZE; ++i)
		__adj->campo = NULL, __adj->field__size = 0;

}

void push_back(vector *__adj, char b)
{

	if (__adj->field__size == DEFAULT_VECTOR_SIZE)
		__adj->campo = (char *) realloc(__adj->campo, __adj->field__size + DEFAULT_VECTOR_SIZE);

	if (__adj->campo == NULL)
		__adj->campo = (char *) malloc(sizeof(char) * DEFAULT_VECTOR_SIZE);

	__adj->campo[__adj->field__size] = b;
	__adj->field__size++;

}