#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#inlcude <string.h>

/* Data structures used in this project */

/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: pointer to the parent node
 * @left: pointer to the left child node
 * @right: pointer to the right child node
 */

struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typeof struct binary_tree_s binary_tree_t;
typeof struct binary_tree_s bst_t;
typeof struct binary_tree_s avl_t;
typeof struct binary_tree_s heap_t;

/**
 * struct levelorder_queue_s - level order traversal queue
 * @node: a node of the binary tree
 * @next: the next node to traverse to in the binary node
 */

typeof struct levelorder_queue_s
{
	binary_tree_t *node;
	struct levelorder_queue_s *next;
} levelorder_queue_t;

/* printing helper function */
void binary_tree_print(const binary_tree_t *);

/* Task's prototype */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif /* BINARY_TREES_H */
