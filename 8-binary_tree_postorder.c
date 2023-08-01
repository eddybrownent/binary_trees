#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary tree
 *				using post-order traverse
 * @func: Pointer to a funtion to a call for each node
 * @tree: tree to be traversed
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
