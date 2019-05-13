#pragma once

typedef struct __binary__tree__node{

	int id;
	struct __binary__tree__node *right;
	struct __binary__tree__node *left;

} bin_tree_t;

void make__binary__tree(bin_tree_t **__root);
bin_tree_t * binary__tree__push(bin_tree_t *__root, const int __data);
bin_tree_t * binary__tree__search(bin_tree_t *, const int __key);
void array__to__binary__tree(bin_tree_t **__root, const int *__array, const unsigned __size);
void binary__tree__infix(const bin_tree_t *__root);
void binary__tree__postfix(const bin_tree_t *__root);
void binary__tree__prefix(const bin_tree_t *__root);
void binary__tree__bfs(const bin_tree_t *__root, const unsigned __size);
bin_tree_t * binary__tree__pop(bin_tree_t *__root, const int __key);
bin_tree_t * binary__tree__erase(bin_tree_t *__root);
int binary__tree__height(const bin_tree_t *__root);
unsigned binary__tree__size(bin_tree_t *__root);
bin_tree_t * binary__tree__lca(bin_tree_t *__root, const int __n1, const int __n2);