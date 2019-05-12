/*
	
	
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "bin_tree.h"

int main (int argc, char **argv)
{

	srand(time(NULL));
	int vet[7] = {20, 8,4,12,10,14,22};

	bin_tree *arvore;

	for (int i = 0; i < 7; ++i)
		printf("%d ", vet[i]);

	printf("\n\n");

	make__binary__tree(&arvore);
	array__to__binary__tree(&arvore, vet, 7);
	binary__tree__bfs(arvore, 7);
	printf("\n");
	printf("%u\n", binary__tree__size(arvore));
	binary__tree__infix(arvore);
	printf("\n");
	bin_tree *aux = binary__tree__lca(arvore, 4, 15);
	printf("%d\n", aux ? aux->id : -1);

}