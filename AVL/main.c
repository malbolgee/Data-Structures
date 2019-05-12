#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <unistd.h>
#include "avl_tree.h"

#define LOG printf("\n\n");

int main (int argc, char **argv)
{

	srand(time(NULL));
	avl_tree *tree;

	make__avl__tree(&tree);
	int vet[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	tree = array__to__avl__tree(tree, vet, 10);

	puts("Prefix traversal");
	avl__tree__prefix(tree);
	LOG;
	puts("Infix traversal");
	avl__tree__infix(tree);
	LOG;
	puts("Postfix traversal");
	avl__tree__postfix(tree);
	LOG;
	puts("Breadth First Search Traversal");	
	avl__tree__bfs(tree, 10);
	LOG;

	avl_tree *lca;

	puts("Lowest Common Ancestor of Two Nodes");
	lca = avl__tree__lca(tree, 5, 10);
	printf("%d", lca ? lca->id : -1);
	LOG;

}