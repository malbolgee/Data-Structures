#include "bin_tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void make__binary__tree(bin_tree **__root)
{

	*__root = NULL;

}

bin_tree * binary__tree__push(bin_tree *__root, const int __data)
{

	if (!__root)
	{

		__root = (bin_tree *) malloc(sizeof(bin_tree));
		__root->id = __data;
		__root->left = __root->right = NULL;

	}
	else if (__root->id < __data)
		__root->right = binary__tree__push(__root->right, __data);
	else if (__root->id > __data)
		__root->left = binary__tree__push(__root->left, __data);

	return __root;

}

bin_tree * binary__tree__search(bin_tree *__root, const int __key)
{
	
	if (!__root)
		return NULL;
	
	if (__root->id < __key)
		return binary__tree__search(__root->right, __key);
	else if (__root->id > __key)
		return binary__tree__search(__root->left, __key);
	else
		return __root;
	
}

void array__to__binary__tree(bin_tree **__root, const int *__array, const unsigned __size)
{

	unsigned i;
	for (i = 0; i < __size; ++i)
		*__root = binary__tree__push(*__root, __array[i]);

}

void binary__tree__infix(const bin_tree *__root)
{

	if (__root)
	{

		binary__tree__infix(__root->left);
		printf("%d ", __root->id);
		binary__tree__infix(__root->right);

	}

}

void binary__tree__postfix(const bin_tree *__root)
{

	if (__root)
	{

		binary__tree__postfix(__root->left);
		binary__tree__postfix(__root->right);
		printf("%d ", __root->id);

	}

}

void binary__tree__prefix(const bin_tree *__root)
{

	if (__root)
	{

		printf("%d ", __root->id);
		binary__tree__prefix(__root->left);
		binary__tree__prefix(__root->right);

	}

}

static bin_tree * __find__max__value__node(bin_tree *__root)
{

	if (!__root)
		return NULL;
	else if (!__root->right)
		return __root;
	else
		return __find__max__value__node(__root->right);

}

static bin_tree * __find__min__value__node(bin_tree *__root)
{

	if (!__root)
		return NULL;
	else if (!__root->left)
		return __root;
	else
		return __find__min__value__node(__root->left);

}

bin_tree * binary__tree__pop(bin_tree *__root, const int __key)
{

	bin_tree *tmp;

	if (!__root)
		return NULL;
	else if (__root->id > __key)
		__root->left = binary__tree__pop(__root->left, __key);
	else if (__root->id < __key)
		__root->right = binary__tree__pop(__root->right, __key);
	else if (__root->left && __root->right)
	{

		tmp = __find__max__value__node(__root->left);
		__root->id = tmp->id;
		__root->left = binary__tree__pop(__root->left, __root->id);

	}
	else
	{

		tmp = __root;
		if (!__root->left)
			__root = __root->right;
		else if (!__root->right)
			__root = __root->left;

		free(tmp);

	}

	return __root;

}

bin_tree * binary__tree__erase(bin_tree *__root)
{

	if (!__root)
		return NULL;

	binary__tree__erase(__root->left);
	binary__tree__erase(__root->right);
	free(__root);

}

int binary__tree__height(const bin_tree *__root)
{

	int lefth, righth;
	if (!__root)
		return -1;

	lefth = binary__tree__height(__root->left);
	righth = binary__tree__height(__root->right);

	return (lefth > righth ? lefth : righth) + 1;

}

unsigned binary__tree__size(bin_tree *__root)
{

	if (!__root)
		return 0;
	else
		return binary__tree__size(__root->left) + 1 + binary__tree__size(__root->right);

}

void binary__tree__bfs(bin_tree *__root, const unsigned __size)
{

	unsigned start, end;
	bin_tree *queue;

	queue = (bin_tree *) malloc(__size * sizeof(bin_tree));
	queue[0] = *__root;
	start = 0; end = 1;

	while (end > start)
	{

		bin_tree *aux = (bin_tree *) malloc(sizeof(bin_tree));
		*aux = queue[start++];
		printf("%u ", aux->id);
		
		if (aux->left)
			queue[end++] = *aux->left;
		if (aux->right)
			queue[end++] = *aux->right;

		free(aux);

	}

	free(queue);

}

bin_tree * binary__tree__lca(bin_tree *__root, const int __n1, const int __n2)
{

	if (!__root || !binary__tree__search(__root, __n1) || !binary__tree__search(__root, __n2))
		return NULL;

	return __lca(__root, __n1, __n2);

}


static bin_tree * __lca(bin_tree *__root, const int __n1, const int __n2)
{

	if (__root)
	{

		if (__root->id > __n1 && __root->id > __n2)
			return binary__tree__lca(__root->left, __n1, __n2);
		if (__root->id < __n1 && __root->id < __n2)
			return binary__tree__lca(__root->right, __n1, __n2);

		return __root;

	}

}