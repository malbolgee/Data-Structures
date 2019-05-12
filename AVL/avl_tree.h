#pragma once

typedef struct __avl__tree__node{

	int id;
	char balancing_factor;
	struct __avl__tree__node *right;
	struct __avl__tree__node *left;

} avl_tree;

#define __MAX(a, b) (a > b ? a : b)

void make__avl__tree(avl_tree **__root);
avl_tree * avl__tree__push(avl_tree *, const int __data);
void avl__tree__infix(const avl_tree *__root);
void avl__tree__postfix(const avl_tree *__root);
void avl__tree__prefix(const avl_tree *__root);
int avl__tree__height(const avl_tree *__root);
avl_tree * avl__tree__search(avl_tree *__root, const int __key);
avl_tree * avl__tree__pop(avl_tree *__root, const int __key);
avl_tree * avl__tree__erase(avl_tree *__root);
avl_tree * array__to__avl__tree(avl_tree *__root, const int *__array, const unsigned __size);
unsigned avl__tree__size(avl_tree *__root);
avl_tree * avl__tree__lca(avl_tree *__root, const int __n1, const int __n2);
void avl__tree__bfs(const avl_tree *__root, const unsigned __size);